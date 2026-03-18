/*
 * XREFs of _CleanupHidRequestList@0 @ 0x1441FF
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 *     _FreeHidTLCInfo@4 @ 0xD2BB8 (_FreeHidTLCInfo@4.c)
 */

_DWORD *__stdcall CleanupHidRequestList()
{
  _DWORD *result; // eax
  _DWORD *v1; // eax
  int v2; // ecx
  _DWORD *v3; // edx
  int v4; // [esp+8h] [ebp-4h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4, (PKTHREAD *)_gTLCInfoLock);
  while ( 1 )
  {
    result = &RawInputManagerObject::gHidRequestTable[2];
    if ( (_DWORD *)*result == result )
      break;
    v1 = (_DWORD *)dword_27550C;
    *(_DWORD *)(dword_27550C + 12) = 0;
    v2 = *v1;
    if ( *(_DWORD **)(*v1 + 4) != v1 || (v3 = (_DWORD *)v1[1], (_DWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_DWORD *)(v2 + 4) = v3;
    Win32FreePool(v1);
  }
  if ( v4 )
    return (_DWORD *)RIMUnlockExclusive(v4);
  return result;
}
