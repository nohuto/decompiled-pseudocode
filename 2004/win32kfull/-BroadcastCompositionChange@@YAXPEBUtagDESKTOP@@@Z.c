/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C000F0D8
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 * Callees:
 *     xxxSendMessageBSM @ 0x1C0036BC0 (xxxSendMessageBSM.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _DWORD v2[14]; // [rsp+30h] [rbp-38h] BYREF
  char v3; // [rsp+70h] [rbp+8h] BYREF

  v2[0] = 8;
  v2[1] = 178;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, _DWORD *, int))xxxSendMessageBSM)(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL),
    798LL,
    0LL,
    0LL,
    v2,
    1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
}
