/*
 * XREFs of ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00584D4
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C (GreSpDwmSyncCaptureSurfaceBits.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0029DA8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C0058B3C (DwmSyncCaptureSurfaceBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224EF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
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
  __int64 v14; // rcx
  int v15; // r9d
  __int64 CurrentProcessWin32Process; // rax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rbx
  __int64 v25; // rdx
  int v26; // esi
  __int64 v27; // r8
  __int64 v28; // r9
  HSURF v29; // rbx
  NTSTATUS v30; // eax
  __int64 CurrentProcess; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rdi
  _BYTE *v37; // r14
  BOOL (__stdcall *v38)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v39; // rax
  BOOL v40; // esi
  DYNAMICMODECHANGESHARELOCK *v41; // rcx
  int v43; // [rsp+38h] [rbp-C8h]
  _BYTE v44[8]; // [rsp+60h] [rbp-A0h] BYREF
  void *v45; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  char v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+7Ch] [rbp-84h]
  int v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  PVOID v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h] BYREF
  int v55; // [rsp+A8h] [rbp-58h]
  HSURF v56; // [rsp+B0h] [rbp-50h]
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-40h] BYREF
  struct ERECTL *v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+D0h] [rbp-30h] BYREF
  int v61; // [rsp+D4h] [rbp-2Ch]
  int v62; // [rsp+D8h] [rbp-28h]
  int v63; // [rsp+DCh] [rbp-24h]
  __int64 v64; // [rsp+E0h] [rbp-20h]
  int v65; // [rsp+E8h] [rbp-18h]
  int v66; // [rsp+ECh] [rbp-14h]
  __int64 v67; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  __int64 v70; // [rsp+108h] [rbp+8h] BYREF
  __int64 v71; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v72[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v73[3]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v74[32]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v75[2]; // [rsp+160h] [rbp+60h] BYREF
  __int16 v76; // [rsp+170h] [rbp+70h]
  _BYTE v77[4]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v78[52]; // [rsp+194h] [rbp+94h] BYREF
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  __int64 v80; // [rsp+1E0h] [rbp+E0h]
  int v81; // [rsp+1E8h] [rbp+E8h]
  int v82; // [rsp+210h] [rbp+110h]
  __int64 v83; // [rsp+220h] [rbp+120h]

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  v12 = 0LL;
  v48 = 0;
  v60 = 0;
  v63 = 0;
  v66 = 0;
  v56 = a4;
  v59 = a8;
  v57 = 0LL;
  v53 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && (*(_DWORD *)(ThreadWin32Thread + 328) & 0x10) != 0 )
  {
    v18 = 2;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( !CurrentProcessWin32Process )
      goto LABEL_9;
    if ( a1 )
      goto LABEL_9;
    v17 = *(_DWORD *)(CurrentProcessWin32Process + 288);
    if ( (v17 & 2) != 0 )
      goto LABEL_9;
    LODWORD(v14) = v17 | 2;
    v18 = 1;
    *(_DWORD *)(CurrentProcessWin32Process + 288) = v14;
  }
  if ( (unsigned int)dword_1C032B3F8 > 5
    && (qword_1C032B408 & 0x400000000000LL) != 0
    && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
  {
    v49 = v18;
    v50 = 0;
    v67 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (unsigned int)&unk_1C02F3427,
      0,
      v15,
      (__int64)&v67,
      (__int64)&v50,
      (__int64)&v49);
  }
LABEL_9:
  v61 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v62 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v64 = 0LL;
  v65 = 1;
  UserEnterUserCritSecShared();
  v19 = UserReferenceDwmProcess();
  v24 = (void *)UserReferenceDwmApiPort(v21, v20, v22, v23);
  UserLeaveUserCritSec();
  LODWORD(v51) = 88;
  if ( v19 && v24 )
  {
    v26 = DwmSyncCaptureSurfaceBits(v24, a7, v61, v62, a2, (__int64)&v51, (__int64)&v57);
  }
  else
  {
    v26 = -1073741823;
    UserDereferenceDwmApiPort(v24);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v44, v25, v27, v28);
  v76 = 256;
  v75[0] = 0LL;
  v75[1] = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v74, a3, 0);
  v29 = v56;
  if ( (v74[24] & 1) == 0 || **(HSURF **)(*(_QWORD *)a3 + 496LL) != v56 )
    v26 = -1073741823;
  if ( v26 >= 0 )
  {
    LOBYTE(v43) = 0;
    Handle = 0LL;
    v26 = ObDuplicateObject(v19, v57, 0LL, &Handle, 4, 512, 1, v43);
    if ( v26 >= 0 )
    {
      Object = 0LL;
      v30 = ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &Object, 0LL);
      v12 = Object;
      v26 = v30;
      v53 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v19);
  if ( v26 >= 0 )
  {
    v69 = 0LL;
    v68 = 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v26 = MmMapViewOfSection(v12, CurrentProcess, &v45, 0LL, 0LL, &v69, &v68, 2, 0, 2);
    if ( v26 >= 0 )
    {
      v60 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v46, (struct _DEVBITMAPINFO *)&v60, v45, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
        v26 = -1073741823;
      if ( v26 >= 0 )
      {
        v55 = 0;
        v54 = 0LL;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v54, 8u, 0, 0LL, 0, 0, 0, 0x200u, 1) )
        {
          v32 = v46;
          v55 = 1;
          v70 = *(_QWORD *)(v46 + 128);
          if ( v70 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v70);
            v32 = v46;
          }
          *(_QWORD *)(v32 + 128) = v54;
          if ( v54 )
            INC_SHARE_REF_CNT(v54);
        }
        else
        {
          v26 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v54);
        if ( v26 >= 0 )
        {
          LOBYTE(v33) = 5;
          v34 = HmgShareLockCheck(v29, v33);
          v35 = v34;
          if ( v34 )
          {
            if ( *(_DWORD *)(v34 + 96) == 6 )
            {
              v36 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
              v71 = v36;
              v73[0] = 0LL;
              SURFREFVIEW::bMap(
                (SURFREFVIEW *)v73,
                (struct _SURFOBJ *)((v46 + 24) & ((unsigned __int128)-(__int128)v46 >> 64)));
              v72[0] = 0LL;
              SURFREFVIEW::bMap((SURFREFVIEW *)v72, (struct _SURFOBJ *)(v35 + 24));
              if ( v73[0] && v72[0] )
              {
                v80 = 0LL;
                v37 = 0LL;
                v81 = 0;
                v82 = 1;
                v83 = 0LL;
                v79 = 0LL;
                if ( a9 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v77, a9, v59, 0);
                  v37 = v77;
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v71) )
                {
                  v38 = RedirCopyBits;
                }
                else if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL) & 0x400) != 0 )
                {
                  v38 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v36 + 2840);
                }
                else
                {
                  v38 = EngCopyBits;
                }
                if ( !v37 || !(unsigned int)ERECTL::bEmpty((ERECTL *)v78) )
                  ((void (__fastcall *)(__int64, unsigned __int64, _BYTE *, _QWORD, struct ERECTL *, POINTL *))v38)(
                    v35 + 24,
                    (v46 + 24) & -(__int64)(v46 != 0),
                    v37,
                    0LL,
                    v59,
                    &gptlZero);
                v12 = v53;
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v72);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v73);
            }
            DEC_SHARE_REF_CNT(v35);
          }
        }
      }
    }
  }
  if ( a9 )
    REGION::vDeleteREGION(a9);
  if ( v45 )
  {
    v39 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v39, v45);
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  v40 = v26 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v74);
  if ( v75[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v75);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v41);
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v40;
}
