/*
 * XREFs of _UmfdUnloadFontFileInternal@4 @ 0xCDEEE
 * Callers:
 *     _UmfdUnloadFontFile@4 @ 0xCDECE (_UmfdUnloadFontFile@4.c)
 *     _UmfdLoadFontFile@28 @ 0xDE9A6 (_UmfdLoadFontFile@28.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 *     ?Remove@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z @ 0xCDF68 (-Remove@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z.c)
 */

int __thiscall UmfdUnloadFontFileInternal(unsigned int *this)
{
  unsigned int *v3; // [esp+8h] [ebp-28h] BYREF
  int v4; // [esp+Ch] [ebp-24h] BYREF
  _DWORD v5[7]; // [esp+10h] [ebp-20h] BYREF
  int v6; // [esp+2Ch] [ebp-4h]

  v3 = this;
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Remove(&v3);
  if ( v4 )
  {
    ExReleasePushLockExclusiveEx(v4, 0);
    KeLeaveCriticalRegion();
  }
  FontDriverDdiRequest::FontDriverDdiRequest(v5, 5);
  v6 = 0;
  v5[0] = &UnloadFontFileRequest::`vftable';
  v5[6] = this;
  if ( UmfdClientSendAndWaitForCompletion(this[1], (int)v5) >= 0 )
    return v6;
  else
    return 0;
}
