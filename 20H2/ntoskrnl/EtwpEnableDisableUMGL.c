/*
 * XREFs of EtwpEnableDisableUMGL @ 0x140936A48
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140719334 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 */

__int64 __fastcall EtwpEnableDisableUMGL(__int64 a1, char a2, unsigned __int16 a3, char a4, unsigned int a5)
{
  unsigned int v5; // ebx
  char v6; // si
  __int64 v9; // rdi
  char v10; // al
  __int16 v12; // [rsp+60h] [rbp+18h]

  v5 = 0;
  v6 = a3;
  if ( a1 == EtwpHostSiloState )
    v9 = 0xFFFFF78000000380uLL;
  else
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1128LL) + 550LL;
  if ( (unsigned int)a3 < *(_DWORD *)(a1 + 16) && a3 )
  {
    KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
    if ( a2 )
    {
      LOBYTE(v12) = v6;
      HIBYTE(v12) = a4;
      *(_WORD *)(v9 + 2LL * a5) = v12;
    }
    else
    {
      v10 = *(_BYTE *)(v9 + 2LL * a5);
      if ( v10 == v6 )
        *(_WORD *)(v9 + 2LL * a5) = 0;
      else
        v5 = v10 != 0 ? -1073741734 : -1073741054;
    }
    KeReleaseMutex((PRKMUTEX)&EtwpGlobalMutex, 0);
  }
  else
  {
    return (unsigned int)-1073741816;
  }
  return v5;
}
