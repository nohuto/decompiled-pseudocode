/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180031238
 * Callers:
 *     PsmHostStateNotification2 @ 0x18000B300 (PsmHostStateNotification2.c)
 * Callees:
 *     ?QueueWork@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x1800313B4 (-QueueWork@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180031460 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180046068 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180046502 (memcpy_0.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x180063598 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

void __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        ModernResourceEnforcer *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *Src,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  char *v11; // rax
  char *v12; // rbx
  _WORD *v13; // rax
  __int64 v14; // r8
  unsigned int v15; // edx
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  PVOID Heap; // rdi
  PVOID v21; // rsi

  if ( a9 <= 1 && (a7 != 1 || *a5 != 6) )
  {
    v11 = (char *)operator new(0x98uLL);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 + 24;
      *((_QWORD *)v12 + 1) = v13;
      *((_QWORD *)v12 + 2) = v13;
      *v13 = 0;
      *((_QWORD *)v12 + 14) = 0LL;
      *((_QWORD *)v12 + 15) = 0LL;
      *((_DWORD *)v12 + 32) = 0;
      *(_OWORD *)(v12 + 136) = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      if ( a4 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *(_WORD *)(a4 + 2 * v14) );
      }
      if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                               v12 + 8,
                               a4) )
        goto LABEL_16;
      if ( a7 > 1 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
        if ( !Heap )
        {
LABEL_16:
          if ( v12 )
            ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
              (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v12,
              v15);
          return;
        }
        v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
        if ( !v21 )
        {
LABEL_14:
          if ( Heap )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          goto LABEL_16;
        }
        memcpy_0(Heap, Src, 8LL * a7);
        *((_QWORD *)v12 + 15) = Heap;
        memcpy_0(v21, a5, 4LL * a7);
        *((_QWORD *)v12 + 14) = v21;
      }
      else
      {
        *((_DWORD *)v12 + 28) = *a5;
        *((_QWORD *)v12 + 15) = *Src;
      }
      v16 = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v12 + 40) = *(_OWORD *)a2;
      *((_DWORD *)v12 + 33) = a9;
      v17 = *(_DWORD *)(a2 + 64);
      v18 = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v12 + 56) = v16;
      *(_DWORD *)v12 = 2;
      v19 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(v12 + 72) = v18;
      *((_DWORD *)v12 + 32) = a7;
      *(_OWORD *)(v12 + 88) = v19;
      *((_DWORD *)v12 + 26) = v17;
      *((_DWORD *)v12 + 27) = a3;
      ModernResourceEnforcer::QueueWork(a1, (struct ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v12);
      v12 = 0LL;
      Heap = 0LL;
      goto LABEL_14;
    }
  }
}
