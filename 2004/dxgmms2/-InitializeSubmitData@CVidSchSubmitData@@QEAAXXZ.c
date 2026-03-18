/*
 * XREFs of ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002A0E0
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C1F0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0029FD0 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 */

void __fastcall CVidSchSubmitData::InitializeSubmitData(CVidSchSubmitData *this)
{
  __int64 v2; // rbx
  char v3; // di
  PSLIST_ENTRY v4; // r9
  unsigned int VidSchSibmitDataSize; // eax
  void *v6; // r9
  __int64 v7; // rcx
  int v8; // r8d
  _DWORD *v9; // rdx
  int v10; // r9d
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // eax

  v2 = *((_QWORD *)this + 1) + 1248LL;
  v3 = 1;
  ++*(_DWORD *)(v2 + 20);
  v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v2);
  if ( !v4 )
  {
    ++*(_DWORD *)(v2 + 24);
    v4 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v2 + 48))(
                         *(unsigned int *)(v2 + 36),
                         *(unsigned int *)(v2 + 44),
                         *(unsigned int *)(v2 + 40),
                         v2);
  }
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize(*((ADAPTER_RENDER **)this + 1));
    memset(v6, 0, VidSchSibmitDataSize);
    v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    if ( *(int *)(v7 + 2304) < 0x2000 )
      v8 = 1;
    else
      v8 = *(_DWORD *)(v7 + 280);
    if ( *(int *)(v7 + 2304) < 0x2000 && !*(_BYTE *)(v7 + 2604) )
      v3 = 0;
    v9 = *(_DWORD **)this;
    v10 = *(_DWORD *)(v7 + 2512);
    *(_BYTE *)(*(_QWORD *)this + 348LL) = v3;
    if ( v3 )
    {
      v9[144] = v8;
      v11 = 8 * v8;
      v12 = v8 << 6;
      v9[143] = v10;
      v9[145] = v10 * (v12 + ((v11 + 199) & 0xFFFFFFF8)) + 16;
      v13 = v10 * (v12 + ((v11 + 199) & 0xFFFFFFF8)) + 584;
      v9[134] = v13;
      v9[135] = v11 + v13;
    }
  }
}
