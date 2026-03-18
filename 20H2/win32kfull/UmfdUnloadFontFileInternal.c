/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C00F3908
 * Callers:
 *     UmfdLoadFontFile @ 0x1C00F3500 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C00F38D0 (UmfdUnloadFontFile.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0090670 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00906A4 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C00F3834 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00F39B0 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v7[8]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v8[6]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+60h] [rbp-18h]

  v6 = a1;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v7, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(v2, &v6);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v8, 5);
  v8[5] = a1;
  v8[0] = &UnloadFontFileRequest::`vftable';
  v9 = 0;
  v3 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), (__int64)v8);
  v4 = v9;
  if ( v3 < 0 )
    return 0;
  return v4;
}
