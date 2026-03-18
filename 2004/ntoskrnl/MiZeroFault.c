/*
 * XREFs of MiZeroFault @ 0x14029CF50
 * Callers:
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     MiCheckVadSequential @ 0x14029A500 (MiCheckVadSequential.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiResolvePrivateZeroFault @ 0x1402A2100 (MiResolvePrivateZeroFault.c)
 *     MiResolveSharedZeroFault @ 0x1402B5230 (MiResolveSharedZeroFault.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiUpdatePageTableUseCount @ 0x140312260 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x140333384 (MiAllowGuardFault.c)
 *     MiCheckFatalAccessViolation @ 0x14034CDD0 (MiCheckFatalAccessViolation.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiPrefetchJumpVad @ 0x140533FFC (MiPrefetchJumpVad.c)
 */

__int64 __fastcall MiZeroFault(__int64 a1, _BYTE *a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v4; // esi
  ULONG_PTR *v5; // r8
  _KPROCESS *Process; // r9
  int v7; // r14d
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r13
  _KPROCESS *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  ULONG_PTR v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 ProtoPteAddress; // r12
  unsigned int v20; // r15d
  ULONG_PTR v21; // rax
  int v23; // ecx
  char v24; // dl
  __int64 **LockedVadEvent; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *p_Lock; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+30h] [rbp-59h] BYREF
  _KPROCESS *v38; // [rsp+38h] [rbp-51h]
  _KPROCESS *v39; // [rsp+40h] [rbp-49h]
  _QWORD v40[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v41; // [rsp+60h] [rbp-29h]
  __int128 v42; // [rsp+70h] [rbp-19h]
  __int64 v43; // [rsp+80h] [rbp-9h]
  unsigned __int64 v44; // [rsp+88h] [rbp-1h]
  __int64 v45; // [rsp+90h] [rbp+7h]
  __int64 v46; // [rsp+98h] [rbp+Fh]

  v4 = 0;
  v40[0] = 0LL;
  v41 = 0LL;
  v5 = (ULONG_PTR *)a1;
  v42 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v43 = 0LL;
  v45 = 0LL;
  *a2 = 1;
  v9 = (*(_BYTE *)(v8 + 184) & 7) == 0;
  v38 = Process;
  LODWORD(v40[0]) = 0;
  v46 = 0LL;
  if ( v9 )
  {
    v7 = 64;
    LODWORD(v40[0]) = 64;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 )
  {
    v24 = *(_BYTE *)v11;
    if ( *(_BYTE *)v11 == 2 )
    {
      v7 |= 1u;
    }
    else if ( v24 == 1 )
    {
      v7 |= 2u;
    }
    else
    {
      if ( v24 != 5 )
      {
LABEL_67:
        if ( v24 == 4 )
          goto LABEL_68;
        goto LABEL_4;
      }
      v7 |= 8u;
    }
    LODWORD(v40[0]) = v7;
    goto LABEL_67;
  }
LABEL_4:
  if ( (v7 & 0xB) == 0 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
LABEL_68:
  if ( (v10 & 1) != 0 && *(_BYTE *)v11 == 4 )
    v46 = *(_QWORD *)(v11 + 40);
  if ( (v7 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v7 |= 4u;
    LODWORD(v40[0]) = v7;
  }
  if ( (v7 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v7 |= 0x10u;
    LODWORD(v40[0]) = v7;
  }
LABEL_6:
  v12 = *v5;
  v44 = v11;
  v40[1] = v5;
  v13 = (_KPROCESS *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v39 = v13;
  if ( v12 >= 0xFFFF800000000000uLL )
  {
    if ( (v7 & 2) != 0 )
      return 0LL;
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL && v10 )
      KeBugCheckEx(0x50u, v12, v5[1], (ULONG_PTR)v13, 6uLL);
  }
  v14 = 0LL;
  if ( v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v20 = 4;
      ProtoPteAddress = 0LL;
      goto LABEL_29;
    }
LABEL_38:
    MiCheckFatalAccessViolation(v12);
    if ( (v7 & 2) != 0 && v14 )
      MiPrefetchJumpVad(v11, v14, v12);
    return 3221225477LL;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) != 0 )
    goto LABEL_11;
  v15 = v12 & 0x7FFFFFFFF000LL;
  if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    ProtoPteAddress = qword_140C4DC38;
    v20 = 1;
    LOBYTE(v7) = v40[0];
    goto LABEL_29;
  }
  if ( v15 != qword_140C4DC48 || !v15 )
  {
LABEL_11:
    v13 = KeGetCurrentThread()->ApcState.Process;
    v14 = *(_QWORD *)&v13[1].Spare2[23];
    if ( v14 )
    {
      v16 = v12 >> 12;
      if ( v12 >> 12 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
        && v16 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
      {
LABEL_14:
        v37 = 0LL;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v17 = v12 & 0x7FFFFFFFF000LL;
          if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            ProtoPteAddress = qword_140C4DC38;
            v20 = 1;
            goto LABEL_28;
          }
          if ( v17 == qword_140C4DC48 && v17 )
          {
            ProtoPteAddress = qword_140C4DC40;
            v20 = 1;
            goto LABEL_28;
          }
        }
        if ( (*(_DWORD *)(v14 + 48) & 0x70) == 0x20 && (*(_DWORD *)(v14 + 64) & 0x10000000) != 0 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v14, 32);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[1] != (__int64 *)KeGetCurrentThread() )
              goto LABEL_90;
          }
        }
        v18 = *(_DWORD *)(v14 + 48);
        if ( (v18 & 4) != 0 )
        {
          v20 = 24;
          ProtoPteAddress = 0LL;
          goto LABEL_28;
        }
        if ( (v18 & 0x100000) == 0 )
        {
          if ( (*(_DWORD *)(v14 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v14 + 48) & 0x70) == 0x50 )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v14, v12 >> 12, 4, &v37);
            if ( ProtoPteAddress )
            {
              v20 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
              if ( (*(_DWORD *)(v14 + 48) & 0x70) == 0x20 && v20 == 7 )
                v20 = 256;
            }
            else
            {
              v20 = 24;
            }
            v13 = *(_KPROCESS **)(v14 + 120);
            if ( (__int64)v13 < 0
              && v16 - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) > (unsigned __int64)(*(_QWORD *)&v13->Header.Lock - 1LL) >> 12 )
            {
              v20 = 24;
            }
            v5 = (ULONG_PTR *)a1;
            Process = v38;
          }
          else
          {
            v20 = 24;
            ProtoPteAddress = 0LL;
          }
LABEL_28:
          LOBYTE(v7) = v40[0];
          if ( v20 != 24 )
            goto LABEL_29;
          goto LABEL_38;
        }
        if ( (v23 = *(_DWORD *)(v14 + 48) & 0x70, v23 == 16)
          || v23 == 48
          || (v18 & 0x400000) != 0
          || (v18 & 0xC0000u) >= 0x80000
          || v23 == 32 && (*(_DWORD *)(v14 + 64) & 0x1000000) != 0
          || *(int *)(v14 + 52) >= 0 )
        {
LABEL_90:
          v20 = 24;
        }
        else
        {
          v20 = (*(_DWORD *)(v14 + 48) >> 7) & 0x1F;
        }
        ProtoPteAddress = 0LL;
        goto LABEL_28;
      }
      v14 = *(_QWORD *)&v13[1].Spare2[15];
      while ( v14 )
      {
        if ( v16 > (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
        {
          v14 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          if ( v16 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
          {
            *(_QWORD *)&v13[1].Spare2[23] = v14;
            goto LABEL_14;
          }
          v14 = *(_QWORD *)v14;
        }
      }
    }
    v14 = 0LL;
    LOBYTE(v7) = v40[0];
    goto LABEL_38;
  }
  ProtoPteAddress = qword_140C4DC40;
  v20 = 1;
  LOBYTE(v7) = v40[0];
LABEL_29:
  if ( (v20 & 0xFFFFFFF8) == 0x10 )
  {
    if ( (v7 & 2) == 0 )
    {
      if ( (unsigned int)MiAllowGuardFault(v5[2]) )
      {
        MiUpdatePageTableUseCount(v12, 1LL);
        v29 = v20 & 0xF;
        if ( ProtoPteAddress )
          v29 |= 0xFFFFFFFFF8000020uLL;
        v30 = MiSwizzleInvalidPte(32 * v29, v26, v27, v28);
        p_Lock = &v39->Header.Lock;
        v32 = v30;
        if ( MiPteInShadowRange((unsigned __int64)v39) )
        {
          if ( (unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
          {
            if ( !HIBYTE(word_140C4DE08) && (v32 & 1) != 0 )
              v32 |= 0x8000000000000000uLL;
            *p_Lock = v32;
            MiWritePteShadow(p_Lock, v32);
            goto LABEL_119;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v32 & 1) != 0 )
          {
            v32 |= 0x8000000000000000uLL;
          }
        }
        *p_Lock = v32;
LABEL_119:
        *a2 = 2;
        return 0LL;
      }
      return 3221225477LL;
    }
    return 0LL;
  }
  v21 = v5[1] >> 57;
  *(_QWORD *)&v41 = v12;
  *(_QWORD *)&v42 = v20;
  LODWORD(v43) = v21;
  *((_QWORD *)&v41 + 1) = ProtoPteAddress;
  v45 = v14;
  if ( !ProtoPteAddress )
    return MiResolvePrivateZeroFault(v40, v13, v5, Process);
  if ( (v7 & 2) == 0 )
  {
    if ( v14 )
    {
      if ( *(__int64 *)(v14 + 120) >= 0 )
      {
        v4 = MiCheckVadSequential((__int64)v40, (__int64)v13, (__int64)v5, Process);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v14 + 36)) )
            __fastfail(0xEu);
          *(_DWORD *)(a1 + 80) |= 1u;
          *(_QWORD *)(a1 + 88) = v14;
        }
      }
    }
  }
  *a2 = 0;
  *a3 = v20;
  *a4 = ProtoPteAddress;
  MiResolveSharedZeroFault(v40, v13, v5, Process);
  return v4;
}
