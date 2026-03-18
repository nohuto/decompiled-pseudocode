/*
 * XREFs of ??1CFormatConverter@@UEAA@XZ @ 0x18021625C
 * Callers:
 *     ??_ECFormatConverter@@UEAAPEAXI@Z @ 0x180216390 (--_ECFormatConverter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x180216308 (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx

  *(_QWORD *)this = &CFormatConverter::`vftable';
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 3) + 4LL) + 24) = &CFormatConverter::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 3) + 4LL);
  *(_DWORD *)((char *)this + v2 + 20) = v2 - 784;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  operator delete(*((void **)this + 98));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 120));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
