/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C01D7B84
 * Callers:
 *     NtVisualCaptureBits @ 0x1C01D5420 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00B4284 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     OpenDwmHandle @ 0x1C00B4484 (OpenDwmHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D6DD4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C01D7098 (-Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v13; // edi
  unsigned __int64 v14; // rdx
  DirectComposition::CResourceMarshaler *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  DirectComposition::CEvent *v23; // rcx
  DirectComposition::CEvent *v24; // rcx
  int v26; // [rsp+20h] [rbp-38h]
  int v27; // [rsp+20h] [rbp-38h]
  void *v28; // [rsp+30h] [rbp-28h] BYREF
  void *v29; // [rsp+38h] [rbp-20h] BYREF
  DirectComposition::CEvent *v30; // [rsp+60h] [rbp+8h] BYREF

  v30 = 0LL;
  v28 = (void *)-1LL;
  v29 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v14 = (unsigned int)(a2 - 1);
    if ( a2 && v14 < *(_QWORD *)(a1 + 80) )
    {
      _mm_lfence();
      v15 = *(DirectComposition::CResourceMarshaler **)(v14 * *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 56));
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15
      && (*(unsigned __int8 (__fastcall **)(DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v15 + 96LL))(
           v15,
           195LL) )
    {
      v13 = DirectComposition::CEvent::Create(Object, v16, &v30);
      if ( v13 < 0
        || (v13 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v19, v26, &v28), v13 < 0)
        || (v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v20, v27, &v29), v13 < 0) )
      {
        v24 = v30;
      }
      else
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          (DirectComposition::CApplicationChannel *)a1,
          *(struct DirectComposition::CResourceMarshaler **)(a1 + 744));
        v23 = *(DirectComposition::CEvent **)(a1 + 736);
        if ( v23 )
          DirectComposition::CEvent::`scalar deleting destructor'(v23, v21, v22);
        *(_QWORD *)(a1 + 736) = v30;
        *(_DWORD *)(a1 + 760) = a5;
        *(_DWORD *)(a1 + 764) = a6;
        *(_DWORD *)(a1 + 768) = a7;
        *(_QWORD *)(a1 + 776) = v28;
        *(_QWORD *)(a1 + 784) = v29;
        *(_DWORD *)(a1 + 752) = a3;
        *(_DWORD *)(a1 + 756) = a4;
        *(_QWORD *)(a1 + 744) = v15;
        DirectComposition::CResourceMarshaler::AddRef(v15);
        v24 = 0LL;
      }
      if ( v24 )
        DirectComposition::CEvent::`scalar deleting destructor'(v24, v17, v18);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v13;
}
