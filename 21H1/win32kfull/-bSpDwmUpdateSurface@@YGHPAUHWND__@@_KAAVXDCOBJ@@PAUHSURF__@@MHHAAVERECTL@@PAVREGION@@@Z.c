/*
 * XREFs of ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164
 * Callers:
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED (_GreSpDwmSyncCaptureSurfaceBits@28.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _DwmSyncCaptureSurfaceBits@44 @ 0xB368E (_DwmSyncCaptureSurfaceBits@44.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D (--$Write@U-$_tlgWrapperByRef@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlg.c)
 */

BOOL __userpurge bSpDwmUpdateSurface@<eax>(
        struct XDCOBJ *a1@<edx>,
        int a2@<ecx>,
        HWND a3,
        unsigned __int64 a4,
        struct XDCOBJ *a5,
        HSURF a6,
        int a7,
        struct ERECTL *a8,
        struct REGION *a9,
        struct ERECTL *a10,
        struct REGION *a11)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v14; // esi
  int CurrentProcessWin32Process; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // edi
  void *v20; // esi
  int v21; // ebx
  struct XDCOBJ *v22; // esi
  PVOID v23; // esi
  NTSTATUS v24; // eax
  int CurrentProcess; // eax
  SURFACE *v26; // ecx
  int v27; // edx
  SURFACE *v28; // eax
  SURFACE *v29; // esi
  int v30; // edi
  struct _SURFOBJ *v31; // eax
  char *v32; // ebx
  struct _SURFOBJ *v33; // eax
  void (__stdcall *v34)(struct _SURFOBJ *, struct _SURFOBJ *, char *, _DWORD, struct ERECTL *, POINTL *); // edx
  int v35; // eax
  BOOL v36; // ebx
  struct ERECTL *v38; // [esp+64h] [ebp-130h]
  void *v39; // [esp+68h] [ebp-12Ch]
  int v40; // [esp+78h] [ebp-11Ch] BYREF
  int v41; // [esp+7Ch] [ebp-118h] BYREF
  HANDLE Handle; // [esp+80h] [ebp-114h] BYREF
  int v43; // [esp+84h] [ebp-110h] BYREF
  int v44; // [esp+88h] [ebp-10Ch]
  void *v45; // [esp+8Ch] [ebp-108h] BYREF
  PVOID v46; // [esp+90h] [ebp-104h]
  PVOID Object; // [esp+94h] [ebp-100h] BYREF
  struct _SURFOBJ *v48; // [esp+98h] [ebp-FCh]
  int v49; // [esp+9Ch] [ebp-F8h] BYREF
  int v50; // [esp+A0h] [ebp-F4h]
  char v51; // [esp+ABh] [ebp-E9h] BYREF
  struct XDCOBJ *v52; // [esp+ACh] [ebp-E8h]
  struct ERECTL *v53; // [esp+B0h] [ebp-E4h]
  struct REGION *v54; // [esp+B4h] [ebp-E0h]
  SURFACE *v55; // [esp+B8h] [ebp-DCh] BYREF
  int v56; // [esp+BCh] [ebp-D8h]
  int v57; // [esp+C0h] [ebp-D4h]
  int v58; // [esp+C4h] [ebp-D0h] BYREF
  int v59; // [esp+C8h] [ebp-CCh]
  int v60; // [esp+CCh] [ebp-C8h]
  int v61; // [esp+D0h] [ebp-C4h]
  int v62; // [esp+D4h] [ebp-C0h]
  int v63; // [esp+D8h] [ebp-BCh]
  _BYTE v64[20]; // [esp+DCh] [ebp-B8h] BYREF
  _DWORD v65[3]; // [esp+F0h] [ebp-A4h] BYREF
  int v66; // [esp+FCh] [ebp-98h]
  char v67[4]; // [esp+10Ch] [ebp-88h] BYREF
  char v68[44]; // [esp+110h] [ebp-84h] BYREF
  int v69; // [esp+13Ch] [ebp-58h]
  int v70; // [esp+150h] [ebp-44h]
  int v71; // [esp+154h] [ebp-40h]
  int v72; // [esp+17Ch] [ebp-18h]
  int v73; // [esp+184h] [ebp-10h]

  v48 = (struct _SURFOBJ *)HIDWORD(a4);
  v54 = a9;
  v52 = a1;
  v53 = a8;
  v41 = 0;
  v45 = 0;
  v46 = 0;
  v55 = 0;
  LOBYTE(v56) = 0;
  v57 = 0;
  v58 = 0;
  v61 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread && (*(_BYTE *)(ThreadWin32Thread + 180) & 0x10) != 0 )
  {
    v14 = 2;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( !CurrentProcessWin32Process )
      goto LABEL_11;
    if ( a2 )
      goto LABEL_11;
    v16 = *(_DWORD *)(CurrentProcessWin32Process + 164);
    if ( (v16 & 2) != 0 )
      goto LABEL_11;
    *(_DWORD *)(CurrentProcessWin32Process + 164) = v16 | 2;
    v14 = 1;
  }
  if ( (unsigned int)dword_266280 > 5 && _tlgKeywordOn(&dword_266280, 0x400000000000LL) )
  {
    v50 = 0;
    Handle = 0;
    v40 = (int)&v49;
    v49 = 0x2000000;
    Object = (PVOID)v14;
    _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_266280,
      (int)&unk_25790F,
      v17,
      v17,
      (int)&v40,
      (int)&Handle,
      (int)&Object);
  }
LABEL_11:
  v18 = *((_DWORD *)a8 + 2) - *(_DWORD *)a8;
  v62 = 0;
  v59 = v18;
  v60 = *((_DWORD *)a8 + 3) - *((_DWORD *)a8 + 1);
  v63 = 1;
  UserEnterUserCritSecShared();
  v19 = UserReferenceDwmProcess();
  v20 = (void *)UserReferenceDwmApiPort();
  UserLeaveUserCritSec();
  v40 = 88;
  if ( v19 && v20 )
  {
    v21 = DwmSyncCaptureSurfaceBits(v20, *(float *)&a5, (int)a6, a7, v59, v60, (int)a3, a4, (int)&v40, (int)&v41);
  }
  else
  {
    v21 = -1073741823;
    UserDereferenceDwmApiPort(v20);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v51);
  v22 = v52;
  LOWORD(v66) = 256;
  memset(v65, 0, sizeof(v65));
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v64, v52, 0);
  if ( (v64[12] & 1) == 0 || **(struct _SURFOBJ ***)(*(_DWORD *)v22 + 504) != v48 )
    v21 = -1073741823;
  if ( v21 < 0 )
  {
    v23 = v46;
  }
  else
  {
    v23 = 0;
    Handle = 0;
    v21 = ObDuplicateObject(v19, v41, 0, &Handle, 4, 512, 1, 0);
    if ( v21 >= 0 )
    {
      Object = 0;
      v24 = ObReferenceObjectByHandle(Handle, 4u, _MmSectionObjectType, 0, &Object, 0);
      v23 = Object;
      v21 = v24;
      v46 = Object;
      ZwClose(Handle);
    }
  }
  UserDereferenceDwmProcess(v19);
  if ( v21 >= 0 )
  {
    v49 = 0;
    v50 = 0;
    v40 = 0;
    CurrentProcess = PsGetCurrentProcess();
    v21 = MmMapViewOfSection(v23, CurrentProcess, &v45, 0, 0, &v49, &v40, 2, 0, 2);
    v41 = v21;
    if ( v21 >= 0 )
    {
      v58 = 6;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v55, (struct _DEVBITMAPINFO *)&v58, v45, 0, 0, 0, 0, 0, 1, 0, 0) )
      {
        v21 = -1073741823;
        v41 = -1073741823;
      }
      if ( v21 >= 0 )
      {
        v44 = 0;
        v43 = 0;
        if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v43, 8u, 0, 0, 0, 0, 0, 0x200u, 1) )
        {
          v26 = v55;
          v44 = 1;
          v40 = *((_DWORD *)v55 + 22);
          if ( v40 )
          {
            XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v40);
            v26 = v55;
          }
          *((_DWORD *)v26 + 22) = v43;
          if ( v43 )
            INC_SHARE_REF_CNT(v43);
        }
        else
        {
          v21 = -1073741823;
          v41 = -1073741823;
        }
        PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v43);
        if ( v21 >= 0 )
        {
          LOBYTE(v27) = 5;
          v28 = (SURFACE *)HmgShareLockCheck(v48, v27);
          v29 = v28;
          if ( v28 )
          {
            if ( *((_DWORD *)v28 + 15) == 6 )
            {
              v30 = *(_DWORD *)(*(_DWORD *)v52 + 36);
              v49 = 0;
              v40 = v30;
              v31 = SURFACE::pSurfobj(v55);
              SURFREFVIEW::bMap((SURFREFVIEW *)&v49, v31);
              v43 = 0;
              v48 = SURFACE::pSurfobj(v29);
              SURFREFVIEW::bMap((SURFREFVIEW *)&v43, v48);
              if ( v49 && v43 )
              {
                v70 = 0;
                v32 = 0;
                v71 = 0;
                v72 = 1;
                v73 = 0;
                v69 = 0;
                if ( v54 )
                {
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v67, v54, v53, 0);
                  v32 = v67;
                }
                bNeedRenderHint(&v40);
                if ( !v32 || !ERECTL::bEmpty((ERECTL *)v68) )
                {
                  v38 = v53;
                  v33 = SURFACE::pSurfobj(v55);
                  v34(v48, v33, v32, 0, v38, &gptlZero);
                }
              }
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v43);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v49);
              v21 = v41;
            }
            DEC_SHARE_REF_CNT(v29);
          }
        }
      }
    }
  }
  if ( v54 )
    REGION::vDeleteREGION(v54);
  if ( v45 )
  {
    v39 = v45;
    v35 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v35, v39);
  }
  if ( v46 )
    ObfDereferenceObject(v46);
  v36 = v21 >= 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v64);
  if ( v65[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v65);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  SURFMEM::~SURFMEM((SURFMEM *)&v55);
  return v36;
}
