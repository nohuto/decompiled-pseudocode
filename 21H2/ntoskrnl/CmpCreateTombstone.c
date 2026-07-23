/*
 * XREFs of CmpCreateTombstone @ 0x1404ED79C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpRebuildKcbCacheFromNode @ 0x14065EDC4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmUnlockHiveSecurity @ 0x14065F004 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x14065F024 (CmLockHiveSecurityExclusive.c)
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     CmpGetPhaseAccessBit @ 0x14086E72C (CmpGetPhaseAccessBit.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14086F17C (CmpIncrementKcbSequenceNumber.c)
 *     CmpAssignSecurityDescriptor @ 0x140871810 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140871EDC (CmpGetSecurityDescriptorForKcbStack.c)
 *     HvpGetCellContextInitialize @ 0x140875E58 (HvpGetCellContextInitialize.c)
 *     CmpAddSubKey @ 0x14087A4F8 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 KcbAtLayerHeight; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int16 v6; // dx
  int v7; // ebx
  unsigned int v8; // r12d
  unsigned int Cell; // eax
  char *v10; // rdi
  unsigned int v11; // r14d
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 SecurityDescriptorForKcbStack; // rbx
  ULONG_PTR v15; // rcx
  __int64 v16; // rbx
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF
  void *v23; // [rsp+80h] [rbp+18h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  HvpGetCellContextInitialize(&v22);
  HvpGetCellContextInitialize(&v21);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2);
  v4 = *(_QWORD *)(KcbAtLayerHeight + 72);
  v5 = 0LL;
  if ( *(__int16 *)(KcbAtLayerHeight + 66) >= 0 )
  {
    do
      v5 = CmpGetKcbAtLayerHeight(a2);
    while ( *(_DWORD *)(v5 + 40) == -1 && (__int16)(v6 - 1) >= 0 );
  }
  v7 = *(_DWORD *)(v5 + 40) >> 31;
  if ( *(int *)(v4 + 40) < 0 )
    v7 = 1;
  HvLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 32));
  v8 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 24LL) + 76;
  Cell = HvAllocateCell(*(_QWORD *)(KcbAtLayerHeight + 32), v8, v7, (unsigned int)&v23, (__int64)&v22);
  v10 = (char *)v23;
  v11 = Cell;
  if ( Cell == -1 )
  {
    v12 = -1073741670;
  }
  else
  {
    memset(v23, 0, v8);
    *(_DWORD *)v10 = 27502;
    v10[12] = CmpGetPhaseAccessBit();
    v10[13] = v10[13] & 0xFC | 1;
    if ( (**(_DWORD **)(KcbAtLayerHeight + 80) & 1) != 0 )
      *((_WORD *)v10 + 1) = 32;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v4 + 40);
    *((_DWORD *)v10 + 7) = -1;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 10) = -1;
    *((_DWORD *)v10 + 11) = -1;
    *((_DWORD *)v10 + 12) = -1;
    *((_WORD *)v10 + 37) = 0;
    *((_DWORD *)v10 + 13) &= 0xFFF0FFFF;
    v10[55] = 0;
    *((_DWORD *)v10 + 13) &= 0xFF0FFFFF;
    v13 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 24LL);
    *((_WORD *)v10 + 36) = v13;
    memmove(v10 + 76, (const void *)(*(_QWORD *)(KcbAtLayerHeight + 80) + 26LL), v13);
    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, 0LL);
    CmLockHiveSecurityExclusive(*(_QWORD *)(KcbAtLayerHeight + 32));
    v12 = CmpAssignSecurityDescriptor(*(_QWORD *)(KcbAtLayerHeight + 32), v11, v10, SecurityDescriptorForKcbStack);
    CmUnlockHiveSecurity(*(_QWORD *)(KcbAtLayerHeight + 32));
    if ( v12 >= 0 )
    {
      if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0LL) )
      {
        if ( (unsigned __int8)CmpAddSubKey(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), v11) )
        {
          CmpIncrementKcbSequenceNumber(KcbAtLayerHeight);
          *(_DWORD *)(KcbAtLayerHeight + 40) = v11;
          v11 = -1;
          CmpRebuildKcbCacheFromNode(v15);
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v4 + 32) + 8LL))(
                  *(_QWORD *)(v4 + 32),
                  *(unsigned int *)(v4 + 40),
                  &v21);
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v4 + 32), v16, *(unsigned int *)(v4 + 40));
          v17 = 2 * *((_WORD *)v10 + 36);
          if ( (v10[2] & 0x20) == 0 )
            v17 = *((_WORD *)v10 + 36);
          if ( (unsigned __int16)*(_DWORD *)(v16 + 52) < (unsigned int)v17 )
            *(_WORD *)(v16 + 52) = v17;
          CmpIncrementKcbSequenceNumber(v4);
          v18 = *(_QWORD *)(v4 + 32);
          *(_WORD *)(v4 + 176) = *(_WORD *)(v16 + 52);
          (*(void (__fastcall **)(__int64, __int64 *))(v18 + 16))(v18, &v21);
          LOBYTE(v19) = 1;
          CmpCleanUpSubKeyInfo(v4, v19);
          v12 = 0;
        }
        else
        {
          v12 = -1073741670;
        }
      }
      else
      {
        v12 = -1073741443;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v22);
  if ( v11 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)(KcbAtLayerHeight + 32));
  HvUnlockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 32));
  return (unsigned int)v12;
}
