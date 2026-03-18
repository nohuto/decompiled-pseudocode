/*
 * XREFs of VidSchHasReadyPackets @ 0x1C003D4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

char __fastcall VidSchHasReadyPackets(__int64 a1)
{
  char v2; // bl
  _QWORD **v3; // rdi
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v6; // r9
  _QWORD *k; // rdx
  __int64 *m; // r8
  __int64 v9; // r11
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v11[0] = a1 + 1728;
  v12 = 0;
  AcquireSpinLock::Acquire((Acquire *)v11);
  if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 440, 0LL, *(unsigned int *)(a1 + 84)) )
  {
    v3 = (_QWORD **)(a1 + 296);
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 4); j != i - 4; j = (_QWORD *)*j )
      {
        v6 = j[80];
        if ( (_QWORD *)v6 != j + 80 && (*(_DWORD *)(v6 + 16) != 4 || (*(_DWORD *)(v6 + 240) & 1) != 0) )
          goto LABEL_22;
      }
      for ( k = (_QWORD *)*(i - 2); k != i - 2; k = (_QWORD *)*k )
      {
        for ( m = (__int64 *)k[4]; m != k + 4; m = (__int64 *)*m )
        {
          if ( *((_DWORD *)m + 36) )
            goto LABEL_22;
          v9 = m[19];
          if ( (__int64 *)v9 != m + 19 && (*(_DWORD *)(v9 + 16) != 4 || (*(_DWORD *)(v9 + 240) & 1) != 0) )
            goto LABEL_22;
        }
      }
    }
  }
  else
  {
LABEL_22:
    v2 = 1;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
  return v2;
}
