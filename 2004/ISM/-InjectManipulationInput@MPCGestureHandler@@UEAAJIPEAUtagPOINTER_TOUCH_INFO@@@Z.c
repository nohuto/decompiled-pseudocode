/*
 * XREFs of ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x18007B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x180023768 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x1800237D4 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x180079E14 (--$MPCGestureHandler_PointerDown@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z @ 0x180079E88 (--$MPCGestureHandler_PointerUp@AEAJAEAJAEAIAEAKAEAK@ISMTracing@@SAXAEAJ0AEAIAEAK2@Z.c)
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x180079EFC (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::InjectManipulationInput(
        MPCGestureHandler *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  __int64 v4; // rbp
  unsigned int SizeForPointerCount; // eax
  __int64 v7; // r8
  const char *v8; // r9
  LARGE_INTEGER *v9; // rbx
  unsigned int *v10; // r13
  unsigned int *v11; // rdx
  char v12; // r12
  LARGE_INTEGER *v13; // r14
  char *v14; // rsi
  char *v15; // r15
  char *v16; // rax
  int v17; // eax
  LARGE_INTEGER v18; // rcx
  char v19; // al
  bool v20; // zf
  int v21; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v25; // [rsp+90h] [rbp+8h]
  void *v26; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a2;
  QueryPerformanceCounter(&PerformanceCount);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(v4);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(&v26, SizeForPointerCount, v7, v8);
  v9 = (LARGE_INTEGER *)v26;
  v10 = (unsigned int *)((char *)v26 + 4);
  *((_DWORD *)v26 + 1) = **((_DWORD **)this + 102);
  v9->LowPart = *(_DWORD *)(*((_QWORD *)this + 102) + 4LL);
  v9[1].LowPart = GetTickCount();
  v9[2] = PerformanceCount;
  v11 = (unsigned int *)&v9[5];
  v9[5].LowPart = *((_DWORD *)this + 210);
  v9[16].HighPart = 1065353216;
  v9[19].LowPart = 1065353216;
  v9[21].HighPart = 1065353216;
  v9[24].LowPart = 1065353216;
  v12 = 1;
  if ( !(_DWORD)v4 )
    goto LABEL_18;
  v13 = v9 + 35;
  v14 = (char *)&v9[27].QuadPart + 4;
  v15 = (char *)(a3 - (struct tagPOINTER_TOUCH_INFO *)v9);
  v25 = v4;
  do
  {
    v16 = &v15[(_QWORD)v13 - 280];
    *(_OWORD *)&v13[-8].LowPart = *(_OWORD *)v16;
    *(_OWORD *)&v13[-6].LowPart = *((_OWORD *)v16 + 1);
    *(_OWORD *)&v13[-4].LowPart = *((_OWORD *)v16 + 2);
    *(_OWORD *)&v13[-2].LowPart = *((_OWORD *)v16 + 3);
    *(_OWORD *)&v13->LowPart = *((_OWORD *)v16 + 4);
    *(_OWORD *)&v13[2].LowPart = *((_OWORD *)v16 + 5);
    *(_OWORD *)&v13[4].LowPart = *((_OWORD *)v16 + 6);
    *(_OWORD *)&v13[6].LowPart = *((_OWORD *)v16 + 7);
    *(_OWORD *)&v13[8].LowPart = *((_OWORD *)v16 + 8);
    v13->LowPart = v9[1].LowPart;
    v13[2] = v9[2];
    v13[-8].HighPart += 2;
    v17 = *(_DWORD *)&v15[(_QWORD)v13 - 268];
    if ( (v17 & 0x10000) != 0 )
    {
      ISMTracing::MPCGestureHandler_PointerDown<long &,long &,unsigned int &,unsigned long &,unsigned long &>(
        (int *)v14 + 11,
        (int *)v14 + 12,
        (unsigned int *)v14,
        v10,
        v11);
      v17 = *(_DWORD *)&v15[(_QWORD)v13 - 268];
      v11 = (unsigned int *)&v9[5];
    }
    if ( (v17 & 0x40000) != 0 )
    {
      ISMTracing::MPCGestureHandler_PointerUp<long &,long &,unsigned int &,unsigned long &,unsigned long &>(
        (int *)v14 + 11,
        (int *)v14 + 12,
        (unsigned int *)v14,
        v10,
        v11);
      v17 = *(_DWORD *)&v15[(_QWORD)v13 - 268];
    }
    v18 = v9[2];
    if ( *((_BYTE *)this + 912) && v17 == 2 )
    {
      if ( v18.QuadPart - *((_QWORD *)this + 115) < *((_QWORD *)this + 116) )
      {
        v19 = 1;
        goto LABEL_14;
      }
      *((LARGE_INTEGER *)this + 115) = v18;
    }
    else
    {
      *((_QWORD *)this + 115) = 0LL;
    }
    v19 = 0;
LABEL_14:
    v12 &= v19;
    ++v9[26].HighPart;
    ISMTracing::MPCGestureHandler_PointerUpdated<long &,long &,unsigned int &,unsigned int &,unsigned long &,unsigned long &,enum InputType &>(
      (int *)v14 + 11,
      (int *)v14 + 12,
      (unsigned int *)v14,
      (unsigned int *)v14 + 2,
      v10,
      (unsigned int *)&v9[5],
      (unsigned int *)v9);
    v14 += 144;
    v13 += 18;
    v20 = v25-- == 1;
    v11 = (unsigned int *)&v9[5];
  }
  while ( !v20 );
  if ( !v12 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, LARGE_INTEGER *))(**((_QWORD **)this + 103) + 24LL))(
            *((_QWORD *)this + 103),
            v9);
    if ( v21 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        394LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        (const char *)(unsigned int)v21);
  }
LABEL_18:
  if ( v26 )
    operator delete(v26, (const struct std::nothrow_t *)v11);
  return 0LL;
}
