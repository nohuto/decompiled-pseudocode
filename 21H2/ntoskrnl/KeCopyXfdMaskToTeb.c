/*
 * XREFs of KeCopyXfdMaskToTeb @ 0x14056FA60
 * Callers:
 *     KxEnableOptionalXStateFeatures @ 0x140570394 (KxEnableOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall KeCopyXfdMaskToTeb(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  char v7; // dl
  char v8; // al
  __int64 v9; // rcx
  __int16 v10; // r8
  _OWORD v11[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v5 = a1[30];
    if ( v5 )
    {
      v6 = a1[68];
      v7 = 0;
      if ( (_KPROCESS *)v6 == KeGetCurrentThread()->ApcState.Process )
      {
        v8 = 1;
      }
      else
      {
        KiStackAttachProcess((_KPROCESS *)v6, 0LL, (__int64)v11, a4);
        v8 = 1;
        v7 = 1;
      }
      v9 = 0LL;
      if ( *(_QWORD *)(v6 + 1408) )
      {
        v10 = *(_WORD *)(v6 + 2412);
        if ( v10 != 332 && v10 != 452 )
          v8 = 0;
        if ( v8 )
          v9 = v5 + 0x2000;
      }
      *(_QWORD *)(v5 + 6216) = a1[133];
      if ( v9 )
        *(_QWORD *)(v9 + 4112) = a1[133];
      if ( v7 )
        KiUnstackDetachProcess((__int64)v11, 0LL);
    }
  }
}
