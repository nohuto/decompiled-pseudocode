/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00144F4
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026F8FC (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     DwmSyncCaptureSurfaceBits @ 0x1C0014B5C (DwmSyncCaptureSurfaceBits.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00C6054 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

_BOOL8 __fastcall bSpDwmUpdateSurface(
        HWND a1,
        __int64 a2,
        struct XDCOBJ *a3,
        HSURF a4,
        float a5,
        int a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9)
{
  PVOID v12; // r14
  __int64 ThreadWin32Thread; // rax
  int v14; // ecx
  int v15; // r9d
  __int64 CurrentProcessWin32Process; // rax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rdi
  void *v20; // rbx
  int v21; // esi
  HSURF v22; // rbx
  NTSTATUS v23; // eax
  __int64 CurrentProcess; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdi
  _BYTE *v30; // r14
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v32; // rax
  BOOL v33; // esi
  DYNAMICMODECHANGESHARELOCK *v34; // rcx
  int v36; // [rsp+38h] [rbp-C8h]
  _BYTE v37[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v38; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  char v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+7Ch] [rbp-84h]
  int v42; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  PVOID v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A8h] [rbp-58h]
  HSURF v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  struct ERECTL *v52; // [rsp+C8h] [rbp-38h]
  int v53; // [rsp+D0h] [rbp-30h] BYREF
  int v54; // [rsp+D4h] [rbp-2Ch]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  __int64 v60; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  __int64 v63; // [rsp+108h] [rbp+8h] BYREF
  __int64 v64; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v66[3]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v67[32]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v68[2]; // [rsp+160h] [rbp+60h] BYREF
  __int16 v69; // [rsp+170h] [rbp+70h]
  _BYTE v70[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v71[52]; // [rsp+194h] [rbp+94h] BYREF
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  __int64 v73; // [rsp+1E0h] [rbp+E0h]
  int v74; // [rsp+1E8h] [rbp+E8h]
  int v75; // [rsp+210h] [rbp+110h]
  __int64 v76; // [rsp+220h] [rbp+120h]

  v38 = 0LL;
  v39 = 0LL;
  v40 = 0;
  v12 = 0LL;
  v41 = 0;
  v53 = 0;
  v56 = 0;
  v59 = 0;
  v49 = a4;
  v52 = a8;
  v50 = 0LL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (*(_DWORD *)(ThreadWin32Thread + 328) & 0x10) != 0 )
  {
    v18 = 2;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( !CurrentProcessWin32Process )
      goto LABEL_9;
    if ( a1 )
      goto LABEL_9;
    v17 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v17 & 2) != 0 )
      goto LABEL_9;
    v14 = v17 | 2;
    v18 = 1;
    *(_DWORD *)(CurrentProcessWin32Process + 288) = v14;
  }
  if ( (unsigned int)dword_1C032A3F8 > 5
    && (qword_1C032A408 & 0x400000000000LL) != 0
    && (qword_1C032A410 & 0x400000000000LL) == qword_1C032A410 )
  {
    v42 = v18;
    v43 = 0;
    v60 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (unsigned int)&unk_1C02F2A37,
      0,
      v15,
      (__int64)&v60,
      (__int64)&v43,
      (__int64)&v42);
  }
LABEL_9:
  v54 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v55 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v57 = 0LL;
  v58 = 1;
  UserEnterUserCritSecShared();
  v19 = UserReferenceDwmProcess();
  v20 = (void *)UserReferenceDwmApiPort();
  UserLeaveUserCritSec();
  LODWORD(v44) = 88;
  if ( v19 && v20 )
  {
    v21 = DwmSyncCaptureSurfaceBits(v20, a7, v54, v55, a2, (__int64)&v44, (__int64)&v50);
  }
  else
  {
    v21 = -1073741823;
    UserDereferenceDwmApiPort(v20);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v37);
  v69 = 256;
  v68[0] = 0LL;
  v68[1] = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v67, a3, 0);
  v22 = v49;
  if ( (v67[24] & 1) == 0 || **(HSURF **)(*(_QWORD *)a3 + 496LL) != v49 )
    v21 = -1073741823;
  if ( v21 >= 0 )
  {
    LOBYTE(v36) = 0;
    Handle = 0LL;
    v21 = ObDuplicateObject(v19, v50, 0LL, &Handle, 4, 512, 1, v36);
    if ( v21 >= 0 )
    {
      Object = 0LL;
      v23 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v12 = Object;
      v21 = v23;
      v46 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v19);
  if ( v21 >= 0 )
  {
    v62 = 0LL;
    v61 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v21 = MmMapViewOfSection(v12, CurrentProcess, &v38, 0LL, 0LL, &v62, &v61, 2, 0, 2);
    if ( v21 >= 0 )
    {
      v53 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v39, (struct _DEVBITMAPINFO *)&v53, v38, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v21 = -1073741823;
      if ( v21 >= 0 )
      {
        v48 = 0;
        v47 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v47, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v25 = v39;
          v48 = 1;
          v63 = *(_QWORD *)(v39 + 128);
          if ( v63 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v63);
            v25 = v39;
          }
          *(_QWORD *)(v25 + 128) = v47;
          if ( v47 )
            INC_SHARE_REF_CNT();
        }
        else
        {
          v21 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v47);
        if ( v21 >= 0 )
        {
          LOBYTE(v26) = 5;
          v27 = HmgShareLockCheck(v22, v26);
          v28 = v27;
          if ( v27 )
          {
            if ( *(_DWORD *)(v27 + 96) == 6 )
            {
              v29 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
              v64 = v29;
              v66[0] = 0LL;
              SURFREFVIEW::bMap(
                (SURFREFVIEW *)v66,
                (struct _SURFOBJ *)((v39 + 24) & ((unsigned __int128)-(__int128)v39 >> 64)));
              v65[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v65, (struct _SURFOBJ *)(v28 + 24));
              if ( v66[0] && v65[0] )
              {
                v73 = 0LL;
                v30 = 0LL;
                v74 = 0;
                v75 = 1;
                v76 = 0LL;
                v72 = 0LL;
                if ( a9 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v70, a9, v52, 0);
                  v30 = v70;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v64) )
                {
                  v31 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
                {
                  v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v29 + 2840);
                }
                else
                {
                  v31 = EngCopyBits;
                }
                if ( !v30 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v71) )
                  ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v31)(
                    v28 + 24,
                    (v39 + 24) & -(__int64)(v39 != 0),
                    v30,
                    0LL,
                    v52,
                    &gptlZero);
                v12 = v46;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v65);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v66);
            }
            DEC_SHARE_REF_CNT(v28);
          }
        }
      }
    }
  }
  if ( a9 )
    REGION::vDeleteREGION(a9);
  if ( v38 )
  {
    v32 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v32, v38);
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  v33 = v21 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v67);
  if ( v68[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v68);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v34);
  SURFMEM::~SURFMEM((SURFMEM *)&v39);
  return v33;
}
