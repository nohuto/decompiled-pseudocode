/*
 * XREFs of ?ProcessDataOnChannelSameProcess@CGlobalComposition@@EEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800BDAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800BDCA4 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800C085C (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 */

__int64 __fastcall CGlobalComposition::ProcessDataOnChannelSameProcess(
        CGlobalComposition *this,
        const struct UCE_RDP_HEADER *a2,
        unsigned int *a3)
{
  int AttachedChannel; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  struct _SLIST_ENTRY *v9; // rdi
  __int64 *Next; // rcx
  __int64 ***v11; // rax
  struct _SLIST_ENTRY *i; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v17; // [rsp+58h] [rbp+10h] BYREF
  struct CChannelContext *v18; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v18 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a2 + 4), &v18);
  v8 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, AttachedChannel, 0x58u);
  }
  else
  {
    v9 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 3);
    if ( v9 )
    {
      Next = (__int64 *)v9[2].Next;
      if ( Next )
      {
        v11 = (__int64 ***)*((_QWORD *)&v9->Next + 1);
        if ( *v11 != (__int64 **)v9 )
          __fastfail(3u);
        *Next = (__int64)v9;
        Next[1] = (__int64)v11;
        *v11 = (__int64 **)Next;
        *((_QWORD *)&v9->Next + 1) = Next;
        v9[2].Next = 0LL;
      }
      for ( i = v9->Next; i != v9; i = i->Next )
      {
        v13 = CComposition::ProcessCommandBatch(this, &i[1].Next + 1, HIDWORD(i[1].Next), v18, &v17);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x67u);
          break;
        }
        *a3 += v17;
      }
      v15 = *((_QWORD *)this + 83);
      InterlockedPushEntrySList((PSLIST_HEADER)(v15 + 160), v9 + 4);
      *(_DWORD *)(v15 + 176) = GetTickCount();
      *(_BYTE *)(v15 + 180) = 1;
    }
  }
  if ( v18 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v18);
  return v8;
}
