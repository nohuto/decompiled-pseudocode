/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800347B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180068300 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  struct IVolumeStrip *v7; // rbx
  struct IVolumeStrip **v8; // r13
  struct IVolumeStrip **i; // rsi
  const WCHAR *v10; // rax
  char v11; // al
  unsigned int v12; // esi
  int v14; // eax
  unsigned int v15; // ebx
  int lpString2; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IVolumeStrip *v18; // [rsp+70h] [rbp+8h] BYREF
  PCNZWCH v19; // [rsp+78h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+88h] [rbp+20h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v20 = v6;
  v19 = a2;
  v7 = 0LL;
  v18 = 0LL;
  EnterCriticalSection(v6);
  v8 = (struct IVolumeStrip **)*((_QWORD *)this + 8);
  for ( i = (struct IVolumeStrip **)*((_QWORD *)this + 7); i != v8; ++i )
  {
    v10 = (const WCHAR *)(*(__int64 (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)*i + 32LL))(*i);
    if ( CompareStringW(0x7Fu, 1u, v10, -1, v19, -1) == 2 )
      break;
  }
  if ( i == *((struct IVolumeStrip ***)this + 8) )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    v11 = 0;
  }
  else
  {
    v7 = *i;
    if ( *i )
    {
      v18 = *i;
      (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v18 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    v11 = 1;
  }
  if ( v11 )
    goto LABEL_10;
  v18 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v7 + 16LL))(v7);
  v14 = CVolumeProvider::CreateDeviceVolumeStrip(this, a2, &v18);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v7 = v18;
LABEL_10:
    v12 = (*(__int64 (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v12 >= 0x3FFFFFFF )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942414LL;
    }
    else
    {
      *a3 = v7;
      (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v7 + 8LL))(v7);
      (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
    (const char *)(unsigned int)v14,
    lpString2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v15;
}
