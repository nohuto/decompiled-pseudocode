/*
 * XREFs of MiGetPageFileSectionForReservation @ 0x140387C10
 * Callers:
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 * Callees:
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiReleasePageFileSectionInfo @ 0x140387BD4 (MiReleasePageFileSectionInfo.c)
 */

__int64 __fastcall MiGetPageFileSectionForReservation(unsigned __int64 a1, __int64 a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v13; // rax

  v6 = (_QWORD *)MiReferencePfBackedSection(a1);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)a2 = *v6;
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)(a2 + 16) = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    *(_QWORD *)(a2 + 24) = v9;
    v10 = v7[1];
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v10 )
      v8 = v7[1];
    *(_QWORD *)(a2 + 16) = v8;
    v11 = v10 + 8LL * (unsigned int)(*((_DWORD *)v7 + 11) - 1);
    if ( v9 > v11 )
      v9 = v11;
    *(_QWORD *)(a2 + 24) = v9;
    if ( !a3 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      return 1LL;
    }
    v13 = MiLockProtoPoolPage(a1, (unsigned __int8 *)(a2 + 32));
    *(_QWORD *)(a2 + 8) = v13;
    if ( v13 )
      return 1LL;
    MiReleasePageFileSectionInfo(a2);
  }
  return 0LL;
}
