/*
 * XREFs of ?_HandleDelegatedInputWorker@@YGPAUtagQMSG@@PAUtagTHREADINFO@@KPAU1@@Z @ 0x14DF5D
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z @ 0x14DECE (-_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     _DelQEntry@12 @ 0x6D770 (_DelQEntry@12.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206 (-HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z.c)
 *     ?ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z @ 0x14D651 (-ReassignInputMessage@@YGXPAUtagTHREADINFO@@0PAUtagQMSG@@@Z.c)
 *     _DelegateReleasePointerMessage@8 @ 0x159FCB (_DelegateReleasePointerMessage@8.c)
 */

struct tagQMSG *__userpurge _HandleDelegatedInputWorker@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *a3,
        unsigned int a4,
        struct tagQMSG *a5)
{
  struct tagTHREADINFO *v5; // esi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  struct tagTHREADINFO *v15; // [esp+0h] [ebp-20h]
  struct tagQMSG *v16; // [esp+4h] [ebp-1Ch]
  int v17; // [esp+10h] [ebp-10h]
  struct tagTHREADINFO *v18; // [esp+14h] [ebp-Ch]
  _BYTE v19[8]; // [esp+18h] [ebp-8h] BYREF

  v5 = a3;
  v17 = *(_DWORD *)a3;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
  if ( (*((_DWORD *)a3 + 16) & 0x100) == 0 )
  {
    EtwTraceBeginDelegatedInputWorker(a3, a1);
    InputTraceLogging::DManip::HandleDelegatedInput((int)a3, a1);
    if ( a1 == 1 )
    {
      v8 = *((_DWORD *)a3 + 16);
      if ( (v8 & 0x20) != 0 )
      {
        v9 = *((_DWORD *)a3 + 2);
        *((_DWORD *)a3 + 16) = v8 & 0xFFFFFF9F | 0x40;
        v10 = HMValidateHandleNoSecure(v9, 1);
        if ( v10 )
        {
          v11 = *((_DWORD *)a3 + 16);
          if ( (v11 & 0x400) != 0 )
          {
            *((_DWORD *)a3 + 2) = 0;
            *((_DWORD *)a3 + 16) = v11 & 0xFFFFFBFF;
          }
          ReassignInputMessage(*(_DWORD *)(v10 + 8), a2, a3, v15, v16);
          goto LABEL_18;
        }
LABEL_9:
        if ( !IsPointerInputMessage(*((_DWORD *)a3 + 3)) || !DelegateReleasePointerMessage(a2, a3) )
        {
          CleanEventMessage(a3);
          DelQEntry((_DWORD *)(*(_DWORD *)(a2 + 236) + 12), a3, 1);
        }
        v12 = *(_DWORD *)(a2 + 236);
        v18 = *(struct tagTHREADINFO **)(v12 + 44);
        if ( v18 == a3 )
        {
          v13 = *(_DWORD *)(a2 + 236);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v5 = a3;
            if ( LOWORD(WPP_GLOBAL_Control->Queue.ListEntry.Flink) )
            {
              LOBYTE(v13) = 5;
              WPP_RECORDER_SF_qq(
                v12,
                v13,
                0x12u,
                12,
                (int)&WPP_639f646729e7343d7b80e44c73d47209_Traceguids,
                v12,
                (char)v18);
              v13 = *(_DWORD *)(a2 + 236);
            }
          }
          *(_DWORD *)(v13 + 44) = 0;
        }
      }
    }
    else
    {
      if ( a1 == 2 )
        goto LABEL_9;
      *((_DWORD *)a3 + 16) |= 0x10u;
    }
LABEL_18:
    EtwTraceEndDelegatedInputWorker(v5, a1);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  return (struct tagQMSG *)v17;
}
