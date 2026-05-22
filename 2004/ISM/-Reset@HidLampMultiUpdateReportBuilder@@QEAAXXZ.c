/*
 * XREFs of ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800A9688
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800A1268 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800A9534 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 */

void __fastcall HidLampMultiUpdateReportBuilder::Reset(HidLampMultiUpdateReportBuilder *this)
{
  __int64 v1; // r8

  v1 = *((int *)this + 4);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  memset_0(*((void **)this + 4), 0, 4 * v1);
  memset_0(*((void **)this + 5), 0, *((int *)this + 4));
  memset_0(*((void **)this + 6), 0, *((int *)this + 4));
  memset_0(*((void **)this + 7), 0, *((int *)this + 4));
  memset_0(*((void **)this + 8), 0, *((int *)this + 4));
}
