/*
 * XREFs of AllocateProcessHidTable @ 0x1C00F7D44
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00F84B0 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00F8DDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00F8E0C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

__int64 AllocateProcessHidTable()
{
  __int64 result; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  result = Win32AllocPoolWithQuotaZInit(112LL, 1953002325LL);
  v1 = (_QWORD *)result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 16);
    v2[1] = v2;
    *v2 = v2;
    v1[5] = v1 + 4;
    v1[4] = v1 + 4;
    v1[7] = v1 + 6;
    v1[6] = v1 + 6;
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5, gTLCInfoLock);
    v3 = &RawInputManagerObject::gHidRequestTable[4];
    v4 = RawInputManagerObject::gHidRequestTable[4];
    if ( *(_QWORD **)(v4 + 8) != &RawInputManagerObject::gHidRequestTable[4] )
      __fastfail(3u);
    *v1 = v4;
    v1[1] = v3;
    *(_QWORD *)(v4 + 8) = v1;
    *v3 = v1;
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v5);
    ++gnHidProcess;
    return (__int64)v1;
  }
  return result;
}
