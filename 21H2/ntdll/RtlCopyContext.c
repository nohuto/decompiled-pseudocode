/*
 * XREFs of RtlCopyContext @ 0x180051F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x18005302C (RtlpGetContextFlagsLocation.c)
 *     RtlpValidateContextFlags @ 0x1800531DC (RtlpValidateContextFlags.c)
 *     RtlpCopyLegacyContext @ 0x1800532C8 (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x18005350C (RtlpCopyXStateChunk.c)
 */

__int64 __fastcall RtlCopyContext(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rdx
  int *v10; // rax
  unsigned int *v11; // r8
  unsigned int v12; // r12d
  int v13; // esi
  unsigned int v14; // esi
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0LL;
  result = RtlpValidateContextFlags(a2, 0LL);
  if ( (int)result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation(a1, a2);
    v10 = (int *)RtlpGetContextFlagsLocation(a3, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(a2 | *v10 | *v11, 0LL);
    if ( (int)result >= 0 )
    {
      v14 = a2 & v13;
      result = RtlpValidateContextFlags(v14, &v18);
      if ( (int)result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v20);
        v16 = result;
        if ( (int)result >= 0 )
        {
          if ( (~v20 & v18) != 0 )
          {
            return 2147483653LL;
          }
          else
          {
            RtlpCopyLegacyContext(v15, a1, v14, a3);
            *ContextFlagsLocation |= v12;
            if ( (v20 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                v7 = a3 + 716;
                v6 = a1 + 716;
                LOBYTE(v17) = (v12 & 0x10020) != 65568;
                if ( ((unsigned __int8)v17 & ((v14 & 0x10020) == 65568)) != 0 )
                  *(_DWORD *)(a1 + 728) = 716;
              }
              else if ( (a2 & 0x100000) != 0 )
              {
                v7 = a3 + 1232;
                v6 = a1 + 1232;
              }
              else if ( (a2 & 0x200000) != 0 )
              {
                v7 = a3 + 416;
                v6 = a1 + 416;
              }
              else if ( (a2 & 0x400000) != 0 )
              {
                v7 = a3 + 912;
                v6 = a1 + 912;
              }
            }
            if ( (v18 & 2) == 0 )
              return v16;
            result = RtlpCopyXStateChunk(v17, v6, v6, v7, v7);
            v16 = result;
            if ( (int)result >= 0 )
              return v16;
          }
        }
      }
    }
  }
  return result;
}
