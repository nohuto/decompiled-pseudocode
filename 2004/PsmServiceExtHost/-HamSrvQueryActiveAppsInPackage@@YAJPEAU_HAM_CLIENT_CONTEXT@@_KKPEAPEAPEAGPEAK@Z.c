/*
 * XREFs of ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180079F98
 * Callers:
 *     HamRpcSrvServicingQueryActiveAppsInPackage @ 0x1800804C0 (HamRpcSrvServicingQueryActiveAppsInPackage.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000B478 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180025C78 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180026980 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x1800272F8 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z @ 0x180029510 (-HampUtilGetAumidFromPsmKey@@YAJPEBGPEAKPEAG@Z.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18002A174 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z @ 0x180063938 (--$RmpArrayGrow@PEAG@@YAJPEAPEAPEAGPEAKK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180076DB0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x18007F5AC (-HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18007FF78 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18008089C (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 */

__int64 __fastcall HamSrvQueryActiveAppsInPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int16 ***a4,
        unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // rsi
  PVOID *v8; // rdi
  __int64 v9; // r13
  int AumidFromPsmKey; // ebx
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v11; // rax
  __int64 v12; // r15
  struct _HAM_RC_TREE_NODE *i; // rax
  struct _HAM_RC_TREE_NODE *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  bool v17; // r14
  int v18; // ebx
  char *Heap; // rax
  char *v20; // r14
  int v21; // eax
  __int64 v22; // r15
  DWORD v23; // edi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+58h] [rbp-A8h] BYREF
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h]
  unsigned __int16 ***v35; // [rsp+68h] [rbp-98h]
  unsigned int *v36; // [rsp+70h] [rbp-90h]
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v37; // [rsp+78h] [rbp-88h]
  unsigned __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int16 v41[136]; // [rsp+140h] [rbp+40h] BYREF

  v5 = a3;
  v6 = a2;
  v36 = a5;
  v35 = a4;
  v28[1] = a3;
  v34 = a2;
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B3218,
      (unsigned __int8 *)dword_18009F7A3,
      0LL,
      0LL,
      2u,
      &v40);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v39);
  v8 = 0LL;
  v30 = 0;
  v9 = 0LL;
  P = 0LL;
  if ( (v5 & 3) == v5 )
  {
    v11 = HampClientPkgFindByPackageHandle(a1, v6);
    v37 = v11;
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 7);
      for ( i = HamRcNodeGetFirst((struct _HAM_RC_TREE_NODE *)v12, 1);
            ;
            i = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)v12, v14) )
      {
        v14 = i;
        if ( !i )
          break;
        v15 = *((_QWORD *)i + 11);
        HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v15);
        v16 = *(_QWORD *)(v15 + 328);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 776) == (_QWORD)v14;
        else
          v17 = 0;
        HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v15);
        if ( !v17 )
        {
          if ( (v5 & 2) == 0
            || (HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v12),
                v18 = *(_DWORD *)(v12 + 344),
                HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v12),
                (v18 & 0xE0) == 0) )
          {
            if ( (v5 & 1) == 0 || HampAppGetHasStartedWindow(v14) )
            {
              v28[0] = 130;
              AumidFromPsmKey = HampUtilGetAumidFromPsmKey((const unsigned __int16 *)v14 + 48, v28, v41);
              if ( AumidFromPsmKey < 0 )
              {
                v20 = 0LL;
                goto LABEL_28;
              }
              Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 2LL * v28[0]);
              v20 = Heap;
              if ( !Heap )
              {
                v8 = (PVOID *)P;
                AumidFromPsmKey = -1073741801;
                goto LABEL_28;
              }
              StringCchCopyW(Heap, v28[0], (char *)v41);
              v21 = RmpArrayGrow<unsigned short *>(&P, &v30, (int)v9 + 1);
              v8 = (PVOID *)P;
              AumidFromPsmKey = v21;
              if ( v21 >= 0 )
              {
                *((_QWORD *)P + v9) = v20;
                v9 = (unsigned int)(v9 + 1);
                AumidFromPsmKey = 0;
              }
              if ( AumidFromPsmKey < 0 )
                goto LABEL_28;
              LOBYTE(v5) = v28[1];
            }
          }
        }
      }
      AumidFromPsmKey = 0;
      v20 = 0LL;
      *v35 = (unsigned __int16 **)v8;
      v8 = 0LL;
      v14 = 0LL;
      P = 0LL;
      *v36 = v9;
LABEL_28:
      if ( v8 )
      {
        if ( (_DWORD)v9 )
        {
          v22 = (unsigned int)v9;
          do
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *v8++);
            --v22;
          }
          while ( v22 );
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
      }
      CemRcObjectDereference(v37);
      if ( v14 )
        CemRcObjectDereference(v14);
      if ( v20 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
      v6 = v34;
      v5 = v28[1];
    }
    else
    {
      AumidFromPsmKey = -1073741275;
    }
  }
  else
  {
    AumidFromPsmKey = -1073741583;
  }
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v23, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
  {
    v31 = v9;
    v32 = v5;
    v38 = v6;
    v33 = AumidFromPsmKey;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v24,
      byte_18009FD23,
      v25,
      v26,
      (__int64)&v33,
      (__int64)&v38,
      (__int64)&v32,
      (__int64)&v31);
  }
  return (unsigned int)AumidFromPsmKey;
}
