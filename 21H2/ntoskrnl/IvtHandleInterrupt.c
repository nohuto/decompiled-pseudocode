/*
 * XREFs of IvtHandleInterrupt @ 0x1404E0280
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14024EC18 (KxTryToAcquireSpinLock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall IvtHandleInterrupt(__int64 a1)
{
  char v1; // r11
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // r9d
  __int64 v7; // r8
  unsigned int v8; // r10d
  __int64 v9; // rdi
  ULONG_PTR v10; // rbp
  ULONG_PTR BugCheckParameter4; // r14
  __int64 v12; // r15
  ULONG_PTR v14; // rdi
  char v15; // si
  __int64 *v16; // rcx
  __int64 v17; // rdx
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 268) )
  {
    v4 = *(_DWORD *)(v3 + 220);
    if ( (v4 & 1) != 0 )
    {
      v1 = 1;
      *(_DWORD *)(v3 + 220) = v4;
      _InterlockedOr(v18, 0);
    }
  }
  v5 = *(_DWORD *)(v3 + 52);
  if ( (v5 & 2) != 0 && v5 != -1 )
  {
    v6 = 0;
    v7 = v3 + 16 * ((*(_QWORD *)(a1 + 176) >> 24) & 0x3FFLL);
    v8 = *(unsigned __int8 *)(a1 + 181) + 1;
    if ( *(unsigned __int8 *)(a1 + 181) != -1 )
    {
      do
      {
        v9 = *(_QWORD *)(v7 + 16LL * ((v6 + BYTE1(v5)) % v8) + 8);
        if ( v9 >= 0 )
          break;
        v10 = *(_QWORD *)(v7 + 16LL * ((v6 + BYTE1(v5)) % v8)) >> 12;
        BugCheckParameter4 = BYTE4(v9);
        v12 = (unsigned __int16)v9;
        if ( (unsigned int)BYTE4(v9) - 32 > 8 )
        {
          v14 = 0LL;
          v15 = 0;
          v16 = 0LL;
          while ( 1 )
          {
            if ( !v16 )
            {
              if ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpDmaAdapterListLock) )
              {
                if ( v15 )
LABEL_28:
                  KxReleaseSpinLock(&HalpDmaAdapterListLock);
                KeBugCheckEx(0xE6u, 0x26uLL, v14, v10, BugCheckParameter4);
              }
              v16 = &HalpDmaAdapterList;
            }
            v16 = (__int64 *)*v16;
            if ( v16 == &HalpDmaAdapterList )
            {
              v16 = 0LL;
              v17 = 0LL;
              v14 = 0LL;
            }
            else
            {
              v17 = v16[9];
              v14 = v16[8];
            }
            v15 = 1;
            if ( !v14
              || v17
              && *(_DWORD *)v17 == 1
              && *(unsigned __int16 *)(v17 + 12) == v12
              && *(unsigned __int16 *)(v17 + 8) == *(_DWORD *)(a1 + 212) )
            {
              goto LABEL_28;
            }
          }
        }
        *(_QWORD *)(v7 + 16LL * ((v6 + BYTE1(v5)) % v8) + 8) = v9;
        _InterlockedOr(v18, 0);
        ++v6;
      }
      while ( v6 < v8 );
    }
    if ( *(_BYTE *)(a1 + 268) )
      v5 &= ~0x80u;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) = v5 | 1;
    _InterlockedOr(v18, 0);
  }
  return v1;
}
