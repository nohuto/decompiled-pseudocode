/*
 * XREFs of ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014ABF4
 * Callers:
 *     ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1C013F158 (-GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQ.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0002458 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001993C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E3544 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E5EDC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0125AD8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C012A150 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z @ 0x1C014AEE8 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAPEAPEAVDXGHWQUEUE@@I@Z.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C014AF44 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C0168B68 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C026B53C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::CreateCddDevice(
        SESSION_ADAPTER *this,
        DXGADAPTER ***a2,
        struct DXGDEVICE **a3,
        struct DXGCONTEXT **a4,
        struct DXGHWQUEUE **a5)
{
  __int64 v7; // r9
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  struct DXGDEVICE **v18; // r12
  int Device; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r13
  __int64 v29; // r8
  DXGCONTEXT **v30; // r10
  struct _D3DDDI_CREATECONTEXTFLAGS v31; // ebx
  unsigned int v32; // r15d
  __int64 v33; // r9
  int v34; // r8d
  struct DXGCONTEXT **v35; // r10
  DXGDEVICE *v36; // r11
  char v37; // al
  int Context; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGHWQUEUE **v41; // rdx
  unsigned int v42; // edi
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v53; // eax
  SIZE_T v54; // rax
  unsigned __int64 v55; // kr00_8
  PVOID v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct DXGHWQUEUE **v64; // r9
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  volatile signed __int64 *v69; // rax
  struct DXGHWQUEUE **v70; // rax
  struct DXGHWQUEUE *v71; // rcx
  DXGCONTEXT **v72; // [rsp+50h] [rbp-B0h]
  struct DXGPROCESS *Current; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_QUERYADAPTERINFO v76; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v77[16]; // [rsp+A8h] [rbp-58h] BYREF
  _D3DKMT_CREATEHWQUEUE v78; // [rsp+B8h] [rbp-48h] BYREF
  int v79; // [rsp+E8h] [rbp-18h] BYREF
  int v80; // [rsp+ECh] [rbp-14h]
  unsigned int v81; // [rsp+F0h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+F8h] [rbp-8h] BYREF
  char v83; // [rsp+128h] [rbp+28h]
  _BYTE v84[144]; // [rsp+130h] [rbp+30h] BYREF

  v7 = *((_QWORD *)this + 2);
  v83 = 0;
  v8 = (struct DXGADAPTER *)(v7 & -(__int64)(*(_QWORD *)(v7 + 2696) != 0LL));
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v84, (struct DXGADAPTER *const)a2, v8);
  CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(*(_QWORD *)this + 18632LL));
  Current = DXGPROCESS::GetCurrent(v10, v9);
  if ( Current )
  {
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v84, 0LL);
    v17 = v13;
    if ( v13 >= 0 )
    {
      v18 = (struct DXGDEVICE **)((char *)this + 56);
      Device = ADAPTER_RENDER::CreateDevice(a2[338], (__int64 *)this + 7, 0, 2, v8, 0, 0, 1, 0LL, 0LL);
      v17 = Device;
      if ( Device >= 0 )
      {
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v84);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77, *v18);
        v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v84, 0LL);
        v17 = v22;
        if ( v22 < 0 )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23);
          v68[4] = Current;
        }
        else
        {
          *((_DWORD *)this + 13) = 1;
          if ( DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)a2) )
          {
            v53 = *((int *)a2 + 582) < 0x2000 ? 1 : *((_DWORD *)a2 + 70);
            *((_DWORD *)this + 13) = v53;
            if ( v53 > 1 )
            {
              v55 = v53;
              v54 = 8LL * v53;
              if ( !is_mul_ok(v55, 8uLL) )
                v54 = -1LL;
              v56 = operator new(v54, 0x4B677844u, 1, PagedPool);
              *((_QWORD *)this + 8) = v56;
              if ( !v56 )
              {
                v59 = (_QWORD *)WdLogNewEntry5_WdEvent(v58, v57);
                v59[3] = a2;
                v59[4] = Current;
                v59[5] = v17;
                WdLogEvent5_WdEvent(v59);
                LODWORD(v17) = -1073741801;
              }
            }
          }
          if ( (int)v17 < 0 )
            goto LABEL_24;
          if ( !PagedPoolZeroedArray<DXGHWQUEUE *,2>::AllocateElements((char *)this + 72, *((unsigned int *)this + 13)) )
          {
            v60 = WdLogNewEntry5_WdEvent(v26, v25);
            *(_QWORD *)(v60 + 24) = a2;
            *(_QWORD *)(v60 + 32) = Current;
            WdLogEvent5_WdEvent(v60);
            LODWORD(v17) = -1073741801;
          }
          if ( (int)v17 < 0 || (v27 = *((_DWORD *)this + 13), v28 = 0LL, !v27) )
          {
LABEL_24:
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
            if ( (int)v17 < 0 && *v18 )
            {
              ADAPTER_RENDER::DestroyDevice(a2[338], *v18, 0LL);
              if ( *((_DWORD *)this + 13) > 1u )
              {
                operator delete[](*((void **)this + 8));
                *((_QWORD *)this + 8) = 0LL;
              }
              PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
              *v18 = 0LL;
            }
            else
            {
              if ( a3 )
              {
                *a3 = *v18;
                _InterlockedAdd64((volatile signed __int64 *)*v18 + 8, 1uLL);
              }
              if ( a4 )
              {
                v69 = (volatile signed __int64 *)*((_QWORD *)this + 8);
                if ( *((_DWORD *)this + 13) != 1 )
                  v69 = (volatile signed __int64 *)*v69;
                *a4 = (struct DXGCONTEXT *)v69;
                _InterlockedAdd64(v69 + 4, 1uLL);
              }
              v41 = a5;
              if ( a5 )
              {
                v70 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
                v71 = *v70;
                *a5 = *v70;
                if ( v71 )
                  _InterlockedAdd64((volatile signed __int64 *)v71 + 11, 1uLL);
              }
            }
            goto LABEL_29;
          }
          while ( 1 )
          {
            v29 = *((unsigned int *)a2 + 680);
            v30 = (DXGCONTEXT **)((char *)this + 64);
            v31.0 = 0;
            v80 = *((_DWORD *)a2 + 680);
            v79 = 0;
            if ( v27 == 1 )
              v32 = *((_DWORD *)a2 + 681);
            else
              v32 = v28;
            v81 = 1 << v32;
            if ( (*((_DWORD *)a2 + 87) & 0x10) != 0 )
            {
              memset(&v76, 0, 24);
              v76.Type = DXGKQAITYPE_PREFERREDGPUNODE;
              *(_OWORD *)&v76.OutputDataSize = 0LL;
              v76.pOutputData = &v79;
              v76.OutputDataSize = 12;
              if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)a2, &v76, v29) < 0 )
              {
                v63 = WdLogNewEntry5_WdAssertion(v62, v61);
                *(_QWORD *)(v63 + 24) = 2360LL;
                WdLogEvent5_WdAssertion(v63);
              }
              LODWORD(v29) = v80;
              v30 = (DXGCONTEXT **)((char *)this + 64);
            }
            v33 = *(_QWORD *)(360LL * v32 + *((_QWORD *)a2[338][2] + 323) + 32);
            if ( v33 && (*(_BYTE *)(74LL * (unsigned int)v29 + v33 + 68) & 1) != 0 )
              v31.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
            if ( *((_DWORD *)this + 13) != 1 )
              v30 = (DXGCONTEXT **)((char *)*v30 + 8 * v28);
            v72 = v30;
            if ( !ADAPTER_RENDER::NodeSupportsGpuVa(*((ADAPTER_RENDER **)*v18 + 2), 0, v29)
              || (v37 = 1, *((_BYTE *)a2 + 2633)) )
            {
              v37 = 0;
            }
            Context = DXGDEVICE::CreateContext(v36, v35, v34, v81, v31, 0LL, 0, D3DKMT_CLIENTHINT_CDD, v37);
            v17 = Context;
            if ( Context < 0 )
              break;
            if ( v31.Value >= 0x10 )
            {
              v64 = (struct DXGHWQUEUE **)*((_QWORD *)this + 9);
              memset(&v78, 0, sizeof(v78));
              if ( (unsigned int)v28 < *((_DWORD *)this + 24) )
                v64 += v28;
              v65 = DXGCONTEXT::CreateHwQueue(*v72, &v78, 0LL, v64);
              v17 = v65;
              if ( v65 < 0 )
              {
                v68 = (_QWORD *)WdLogNewEntry5_WdEvent(v67, v66);
                v68[3] = *v72;
                v68[5] = Current;
                v68[4] = a2;
                v68[6] = v17;
                goto LABEL_61;
              }
            }
            v27 = *((_DWORD *)this + 13);
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v27 )
              goto LABEL_24;
          }
          v68 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39);
          v68[4] = Current;
        }
        v68[5] = v17;
        v68[3] = a2;
LABEL_61:
        WdLogEvent5_WdEvent(v68);
        goto LABEL_24;
      }
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v49[3] = a2;
      CurrentProcess = PsGetCurrentProcess(v51, v50);
      v49[5] = v17;
      v49[4] = CurrentProcess;
      WdLogEvent5_WdError(v49);
LABEL_29:
      v42 = v17;
      goto LABEL_30;
    }
    if ( a2 == (DXGADAPTER ***)v8 || (v15 = *((unsigned int *)a2 + 50), (_DWORD)v15 == 1) && !*((_BYTE *)a2 + 2609) )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
      v48[3] = a2;
      v48[4] = v8;
      v48[5] = Current;
      v48[6] = v17;
      WdLogEvent5_WdWarning(v48);
      goto LABEL_29;
    }
    v47 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v47 + 24) = a2;
    WdLogEvent5_WdWarning(v47);
    v42 = -1073741267;
  }
  else
  {
    v44 = WdLogNewEntry5_WdError(v12, v11);
    v42 = -1073741823;
    *(_QWORD *)(v44 + 24) = PsGetCurrentProcess(v46, v45);
    *(_QWORD *)(v44 + 32) = -1073741823LL;
    WdLogEvent5_WdError(v44);
  }
LABEL_30:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84, (__int64)v41);
  if ( v83 )
    KeUnstackDetachProcess(&ApcState);
  return v42;
}
