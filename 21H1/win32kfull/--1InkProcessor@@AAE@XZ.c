/*
 * XREFs of ??1InkProcessor@@AAE@XZ @ 0xD3702
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xD377E (-RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z @ 0x1AC42E (-UnlinkAndReleaseInkDevice@InkProcessor@@AAEXPAPAVInkDevice@@@Z.c)
 */

void __thiscall InkProcessor::~InkProcessor(InkProcessor **this)
{
  InkFeedbackServer *v2; // ecx
  InkProcessor *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  struct InkDevice *v6; // ecx
  InkFeedbackServer *v7; // ecx
  struct InkDevice *v8; // [esp+Ch] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  v3 = this[2];
  while ( v3 != (InkProcessor *)(this + 2) )
  {
    v6 = (InkProcessor *)((char *)v3 - 48);
    v3 = *(InkProcessor **)v3;
    v8 = v6;
    v7 = v6 != 0 ? (struct InkDevice *)((char *)v6 + 20) : 0;
    if ( *((_DWORD *)v7 + 1) )
      InkFeedbackServer::RemoveInkFeedbackProvider(v7, v7);
    InkProcessor::UnlinkAndReleaseInkDevice(v7, &v8);
  }
  if ( this[5] )
    InkFeedbackServer::RemoveInkFeedbackProvider(v2, (struct InkFeedbackProviderBase *)(this + 4));
  v4 = HIDWORD(qword_2662C0);
  v5 = qword_2662C0;
  CallbackContext = 0;
  qword_2662C0 = 0LL;
  EtwUnregister(__PAIR64__(v4, v5));
  ExReleasePushLockExclusiveEx(this, 0);
  KeLeaveCriticalRegion();
  this[4] = (InkProcessor *)&InkFeedbackProviderBase::`vftable';
}
