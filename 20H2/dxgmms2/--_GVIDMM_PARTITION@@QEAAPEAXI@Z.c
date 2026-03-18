/*
 * XREFs of ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0026A9C
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C00117CC (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0012040 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0012B28 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00AF824 (-DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z.c)
 */

struct VIDMM_PARTITION *__fastcall VIDMM_PARTITION::`scalar deleting destructor'(struct VIDMM_PARTITION *P)
{
  char *v2; // rcx
  char *v3; // rdi
  void *v4; // rcx

  if ( *((_QWORD *)P + 5) )
  {
    VIDMM_GLOBAL::DeInitializePartitionForAllAdapters(P);
    v2 = (char *)*((_QWORD *)P + 5);
    if ( v2 )
    {
      v3 = v2 - 8;
      `vector destructor iterator'(
        v2,
        376LL,
        *((_QWORD *)v2 - 1),
        (void (__fastcall *)(char *))VIDMM_PARTITION_ADAPTER_INFO::~VIDMM_PARTITION_ADAPTER_INFO);
      if ( v3 )
        ExFreePoolWithTag(v3, 0);
    }
  }
  v4 = (void *)*((_QWORD *)P + 3);
  if ( v4 )
    ObfDereferenceObject(v4);
  ExFreePoolWithTag(P, 0);
  return P;
}
