/*
 * XREFs of ?GetDevicePipeFormat@CAudioDeviceGraph@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1400031F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140005E18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetDevicePipeFormat(CAudioDeviceGraph *this, struct tWAVEFORMATEX **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int16 *v8; // rbp
  __int64 v9; // rbx
  struct tWAVEFORMATEX *v10; // rax
  struct tWAVEFORMATEX *v11; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( !*((_DWORD *)this + 60) )
  {
    v7 = -2005139437;
    v13 = 1011LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)v7,
      v16);
    goto LABEL_10;
  }
  v5 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(*((_QWORD *)this + 18) + 16LL);
  if ( !v5 )
  {
    v7 = -2005139430;
    v13 = 1015LL;
    goto LABEL_16;
  }
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 8LL))(v5, &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    v14 = (unsigned int)v6;
    v15 = 1019LL;
  }
  else
  {
    v8 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
    v9 = v8[8];
    v10 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v9 + 18);
    v11 = v10;
    if ( v10 )
    {
      memcpy_0(v10, v8, v9 + 18);
      v7 = 0;
    }
    else
    {
      v7 = -2147024882;
    }
    *a2 = v11;
    if ( (v7 & 0x80000000) == 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v14 = v7;
    v15 = 1021LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
    (const char *)v14,
    v16);
LABEL_8:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_10:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
