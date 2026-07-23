/*
 * XREFs of AlpcpAllocateFromBitmap @ 0x1405EAD2C
 * Callers:
 *     AlpcpAllocateCompletionBuffer @ 0x1405EAC60 (AlpcpAllocateCompletionBuffer.c)
 * Callees:
 *     AlpcpFreeBitmap @ 0x1408C379C (AlpcpFreeBitmap.c)
 */

__int64 __fastcall AlpcpAllocateFromBitmap(unsigned int *a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v7; // r8
  unsigned int *v8; // rax
  unsigned int v9; // edx
  unsigned int i; // ecx
  signed __int32 *v11; // rdx
  int v12; // r11d
  int v13; // r10d
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned int v17; // esi
  int v18; // r10d
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21; // eax
  unsigned int v22; // edi

  v3 = 0;
  v7 = 0xFFFFFFFFLL;
  v8 = a1;
  if ( a1 != a2 )
  {
    while ( 2 )
    {
      v9 = *v8;
      for ( i = 0; i < 0x20; ++i )
      {
        if ( (v9 & 1) != 0 )
        {
          v7 = 0xFFFFFFFFLL;
          v3 = 0;
        }
        else
        {
          if ( (_DWORD)v7 == -1 )
            v7 = i + 32 * (unsigned int)(v8 - a1);
          if ( ++v3 == a3 )
          {
            v11 = (signed __int32 *)&a1[(unsigned __int64)(unsigned int)v7 >> 5];
            v12 = v7 & 0x1F;
            if ( (v7 & 0x1F) != 0 )
            {
              v17 = v3;
              if ( v3 >= 32 - v12 )
                v17 = 32 - v12;
              v18 = ((1 << v17) - 1) << v12;
              _m_prefetchw(v11);
              v19 = *v11;
              while ( (v19 & v18) == 0 )
              {
                v20 = v19;
                v19 = _InterlockedCompareExchange(v11, v18 | v19, v19);
                if ( v20 == v19 )
                {
                  v3 -= v17;
LABEL_23:
                  ++v11;
                  goto LABEL_10;
                }
              }
            }
            else
            {
LABEL_10:
              if ( v3 >= 0x20 )
              {
                _m_prefetchw(v11);
                v21 = *v11;
                while ( !v21 )
                {
                  v21 = _InterlockedCompareExchange(v11, -1, 0);
                  if ( !v21 )
                  {
                    v3 -= 32;
                    goto LABEL_23;
                  }
                }
              }
              else
              {
                if ( !v3 )
                  return (unsigned int)v7;
                v13 = (1 << v3) - 1;
                _m_prefetchw(v11);
                v14 = *v11;
                while ( (v14 & v13) == 0 )
                {
                  v15 = v14;
                  v14 = _InterlockedCompareExchange(v11, v13 | v14, v14);
                  if ( v15 == v14 )
                    return (unsigned int)v7;
                }
              }
              v22 = a3 - v3;
              if ( v22 )
                AlpcpFreeBitmap(a1, v11, v7, v22);
            }
            return 4294967294LL;
          }
        }
        v9 >>= 1;
      }
      if ( ++v8 != a2 )
        continue;
      break;
    }
  }
  return 0xFFFFFFFFLL;
}
