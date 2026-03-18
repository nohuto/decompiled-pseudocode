/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C00B4090
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C00512B0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00B400C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00B4284 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x1C00B42BC (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00B9354 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        __int64 a2,
        __int64 a3)
{
  bool v3; // zf
  DirectComposition::CEvent *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r8
  struct _ERESOURCE *v11; // rcx
  DirectComposition::CEvent *v12; // rcx
  __int64 v13; // rdx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  _QWORD **v18; // rbx
  _QWORD *v19; // rcx
  _QWORD **v20; // rsi
  _QWORD *v21; // rcx
  _QWORD **v22; // rsi
  _QWORD *v23; // rcx
  _QWORD **v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax

  v3 = *((_QWORD *)this + 27) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v3 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v5 = (DirectComposition::CEvent *)*((_QWORD *)this + 27);
    if ( v5 )
      DirectComposition::CEvent::`scalar deleting destructor'(v5, a2);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      Win32FreePool((__int64)v6, a2, a3);
      *((_QWORD *)this + 23) = v7;
      v6 = v7;
    }
    while ( v7 );
  }
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
  {
    Win32FreePool(v8, a2, a3);
    *((_QWORD *)this + 22) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 75);
  v11 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v11 )
  {
    ExDeleteResourceLite(v11);
    Win32FreePool(*((_QWORD *)this + 46), v29, v30);
  }
  v12 = (DirectComposition::CEvent *)*((_QWORD *)this + 45);
  if ( v12 )
    DirectComposition::CEvent::`scalar deleting destructor'(v12, v9);
  v13 = *((_QWORD *)this + 91);
  if ( v13 )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 85));
    *((_QWORD *)this + 91) = 0LL;
  }
  v14 = (void *)*((_QWORD *)this + 90);
  if ( v14 )
  {
    MmUnmapViewInSessionSpace(v14);
    *((_QWORD *)this + 90) = 0LL;
  }
  v15 = (void *)*((_QWORD *)this + 88);
  if ( v15 )
  {
    ObfDereferenceObject(v15);
    *((_QWORD *)this + 88) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 85);
  if ( v16 )
  {
    ObfDereferenceObject(v16);
    *((_QWORD *)this + 85) = 0LL;
  }
  v17 = (void *)*((_QWORD *)this + 77);
  if ( v17 )
    ObfDereferenceObject(v17);
  v18 = (_QWORD **)((char *)this + 528);
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 == v18 )
      break;
    if ( (_QWORD **)v19[1] != v18 || (v31 = (_QWORD *)*v19, *(_QWORD **)(*v19 + 8LL) != v19) )
LABEL_49:
      __fastfail(3u);
    *v18 = v31;
    v31[1] = v18;
    Win32FreePool((__int64)v19, v13, v10);
  }
  v20 = (_QWORD **)((char *)this + 544);
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 == v20 )
      break;
    if ( (_QWORD **)v21[1] != v20 )
      goto LABEL_49;
    v32 = (_QWORD *)*v21;
    if ( *(_QWORD **)(*v21 + 8LL) != v21 )
      goto LABEL_49;
    *v20 = v32;
    v32[1] = v20;
    Win32FreePool((__int64)v21, v13, v10);
  }
  v22 = (_QWORD **)((char *)this + 560);
  while ( 1 )
  {
    v23 = *v22;
    if ( *v22 == v22 )
      break;
    if ( (_QWORD **)v23[1] != v22 )
      goto LABEL_49;
    v33 = (_QWORD *)*v23;
    if ( *(_QWORD **)(*v23 + 8LL) != v23 )
      goto LABEL_49;
    *v22 = v33;
    v33[1] = v22;
    Win32FreePool((__int64)v23, v13, v10);
  }
  v24 = (_QWORD **)((char *)this + 576);
  while ( 1 )
  {
    v25 = *v24;
    if ( *v24 == v24 )
      break;
    if ( (_QWORD **)v25[1] != v24 )
      goto LABEL_49;
    v34 = (_QWORD *)*v25;
    if ( *(_QWORD **)(*v25 + 8LL) != v25 )
      goto LABEL_49;
    *v24 = v34;
    v34[1] = v24;
    Win32FreePool((__int64)v25, v13, v10);
  }
  v26 = *((_QWORD *)this + 59);
  if ( v26 )
    Win32FreePool(v26, v13, v10);
  v27 = *((_QWORD *)this + 14);
  if ( v27 )
    Win32FreePool(v27, v13, v10);
  v28 = *((_QWORD *)this + 7);
  if ( v28 )
    Win32FreePool(v28, v13, v10);
  DirectComposition::CChannel::~CChannel(this);
}
