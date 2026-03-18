/*
 * XREFs of ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x1801C3018
 * Callers:
 *     ?EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z @ 0x1801C2110 (-EnqueueComputeScribbleOnHost@CGenericInk@@UEAAJ_KPEAVCComputeScribble@@@Z.c)
 *     ?SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z @ 0x1801C3118 (-SendMessageToHostForCreation@CSuperWetSource@@QEAAJ_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x1801C2F2C (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CSuperWetSource::EnsureVailPerFrameDataHostReaderQueue(CSuperWetSource *this)
{
  __int64 v2; // rcx
  int v3; // edi
  void *v4; // rcx
  LPVOID v6; // rax
  void *v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  void **v9; // [rsp+30h] [rbp-28h]
  volatile __int32 **v10; // [rsp+38h] [rbp-20h] BYREF
  char v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 6);
  if ( !v2 || *((_QWORD *)this + 3) )
    goto LABEL_11;
  v10 = 0LL;
  v8[1] = v2;
  v9 = (void **)((char *)this + 24);
  v11 = 1;
  v8[0] = 3968LL;
  v3 = CSharedCircularQueue::Create((unsigned int *)v8, 0x7Cu, &v10, 1);
  if ( v11 )
  {
    v4 = *v9;
    *v9 = v10;
    if ( v4 )
      operator delete(v4);
  }
  if ( v3 >= 0 )
  {
LABEL_11:
    if ( *((_QWORD *)this + 4) )
      return 0LL;
    v6 = DefaultHeap::Alloc(0x7CuLL);
    v7 = (void *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v6;
    if ( v7 )
    {
      operator delete(v7);
      v6 = (LPVOID)*((_QWORD *)this + 4);
    }
    if ( v6 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\superwetsource.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
}
