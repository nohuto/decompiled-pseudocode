/*
 * XREFs of MiZeroFault @ 0x140359BB0
 * Callers:
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 * Callees:
 *     MiCheckVadSequential @ 0x14020CC50 (MiCheckVadSequential.c)
 *     MiAllowGuardFault @ 0x140220004 (MiAllowGuardFault.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x14023DA3C (MiCheckFatalAccessViolation.c)
 *     MiUpdatePageTableUseCount @ 0x14024DB74 (MiUpdatePageTableUseCount.c)
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiResolveSharedZeroFault @ 0x1403398C0 (MiResolveSharedZeroFault.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiPrefetchJumpVad @ 0x14053970C (MiPrefetchJumpVad.c)
 */

__int64 __fastcall MiZeroFault(__int64 a1, _BYTE *a2, unsigned int *a3, __int64 *a4)
{
  unsigned int v4; // esi
  __int64 v5; // r8
  _KPROCESS *Process; // r9
  int v7; // r14d
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  ULONG_PTR v16; // r14
  __int64 v17; // rax
  int v18; // eax
  __int64 ProtoPteAddress; // r12
  unsigned int v20; // r15d
  _QWORD *v21; // rdx
  __int64 v22; // rax
  int v24; // ecx
  char v25; // dl
  __int64 **LockedVadEvent; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // [rsp+30h] [rbp-59h] BYREF
  _KPROCESS *v32; // [rsp+38h] [rbp-51h]
  __int64 *v33; // [rsp+40h] [rbp-49h]
  _QWORD v34[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v35; // [rsp+60h] [rbp-29h]
  __int128 v36; // [rsp+70h] [rbp-19h]
  __int64 v37; // [rsp+80h] [rbp-9h]
  unsigned __int64 v38; // [rsp+88h] [rbp-1h]
  __int64 v39; // [rsp+90h] [rbp+7h]
  __int64 v40; // [rsp+98h] [rbp+Fh]

  v4 = 0;
  v34[0] = 0LL;
  v35 = 0LL;
  v5 = a1;
  v36 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 56);
  v37 = 0LL;
  v39 = 0LL;
  *a2 = 1;
  v9 = (*(_BYTE *)(v8 + 184) & 7) == 0;
  v32 = Process;
  LODWORD(v34[0]) = 0;
  v40 = 0LL;
  if ( v9 )
  {
    v7 = 64;
    LODWORD(v34[0]) = 64;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 )
  {
    v25 = *(_BYTE *)v11;
    if ( *(_BYTE *)v11 == 2 )
    {
      v7 |= 1u;
    }
    else if ( v25 == 1 )
    {
      v7 |= 2u;
    }
    else
    {
      if ( v25 != 5 )
      {
LABEL_67:
        if ( v25 == 4 )
          goto LABEL_68;
        goto LABEL_4;
      }
      v7 |= 8u;
    }
    LODWORD(v34[0]) = v7;
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
    v40 = *(_QWORD *)(v11 + 40);
  if ( (v7 & 2) != 0 && (*(_DWORD *)(v11 + 80) & 0x4000) != 0 )
  {
    v7 |= 4u;
    LODWORD(v34[0]) = v7;
  }
  if ( (v7 & 8) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) > 0x1000uLL )
  {
    v7 |= 0x10u;
    LODWORD(v34[0]) = v7;
  }
LABEL_6:
  v12 = *(_QWORD *)v5;
  v38 = v11;
  v34[1] = v5;
  v33 = (__int64 *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v12 >= 0xFFFF800000000000uLL )
  {
    if ( (v7 & 2) != 0 )
      return 0LL;
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL && v10 )
      KeBugCheckEx(0x50u, v12, *(_QWORD *)(v5 + 8), ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 6uLL);
  }
  v13 = 0LL;
  if ( v12 > 0x7FFFFFFEFFFFLL )
  {
    if ( v12 >= 0xFFFFF68000000000uLL && v12 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v20 = 4;
      ProtoPteAddress = 0LL;
      goto LABEL_29;
    }
LABEL_38:
    MiCheckFatalAccessViolation(v12, v13, *(_QWORD *)(v5 + 8), (__int64)Process);
    if ( (v7 & 2) != 0 && v13 )
      MiPrefetchJumpVad(v11, v13, v12);
    return 3221225477LL;
  }
  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) != 0 )
    goto LABEL_11;
  v14 = v12 & 0x7FFFFFFFF000LL;
  if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    ProtoPteAddress = qword_140C4DE78;
    v20 = 1;
    LOBYTE(v7) = v34[0];
    goto LABEL_29;
  }
  if ( v14 != qword_140C4DE88 || !v14 )
  {
LABEL_11:
    v15 = KeGetCurrentThread()->ApcState.Process;
    v13 = *(_QWORD *)&v15[1].Spare2[23];
    if ( v13 )
    {
      v16 = v12 >> 12;
      if ( v12 >> 12 >= (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32))
        && v16 <= (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) )
      {
LABEL_14:
        v31 = 0LL;
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          v17 = v12 & 0x7FFFFFFFF000LL;
          if ( (v12 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
          {
            ProtoPteAddress = qword_140C4DE78;
            v20 = 1;
            goto LABEL_28;
          }
          if ( v17 == qword_140C4DE88 && v17 )
          {
            ProtoPteAddress = qword_140C4DE80;
            v20 = 1;
            goto LABEL_28;
          }
        }
        if ( (*(_DWORD *)(v13 + 48) & 0x70) == 0x20 && (*(_DWORD *)(v13 + 64) & 0x10000000) != 0 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v13, 32);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[1] != (__int64 *)KeGetCurrentThread() )
              goto LABEL_90;
          }
        }
        v18 = *(_DWORD *)(v13 + 48);
        if ( (v18 & 4) != 0 )
        {
          v20 = 24;
          ProtoPteAddress = 0LL;
          goto LABEL_28;
        }
        if ( (v18 & 0x100000) == 0 )
        {
          if ( (*(_DWORD *)(v13 + 64) & 0x1000000) == 0 || (*(_BYTE *)(v13 + 48) & 0x70) == 0x50 )
          {
            ProtoPteAddress = MiGetProtoPteAddress(v13, v12 >> 12, 4, &v31);
            if ( ProtoPteAddress )
            {
              v20 = (*(_DWORD *)(v13 + 48) >> 7) & 0x1F;
              if ( (*(_DWORD *)(v13 + 48) & 0x70) == 0x20 && v20 == 7 )
                v20 = 256;
            }
            else
            {
              v20 = 24;
            }
            v21 = *(_QWORD **)(v13 + 120);
            if ( (__int64)v21 < 0
              && v16 - (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) > (unsigned __int64)(*v21 - 1LL) >> 12 )
            {
              v20 = 24;
            }
            v5 = a1;
            Process = v32;
          }
          else
          {
            v20 = 24;
            ProtoPteAddress = 0LL;
          }
LABEL_28:
          LOBYTE(v7) = v34[0];
          if ( v20 != 24 )
            goto LABEL_29;
          goto LABEL_38;
        }
        if ( (v24 = *(_DWORD *)(v13 + 48) & 0x70, v24 == 16)
          || v24 == 48
          || (v18 & 0x400000) != 0
          || (v18 & 0xC0000u) >= 0x80000
          || v24 == 32 && (*(_DWORD *)(v13 + 64) & 0x1000000) != 0
          || *(int *)(v13 + 52) >= 0 )
        {
LABEL_90:
          v20 = 24;
        }
        else
        {
          v20 = (*(_DWORD *)(v13 + 48) >> 7) & 0x1F;
        }
        ProtoPteAddress = 0LL;
        goto LABEL_28;
      }
      v13 = *(_QWORD *)&v15[1].Spare2[15];
      while ( v13 )
      {
        if ( v16 > (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) )
        {
          v13 = *(_QWORD *)(v13 + 8);
        }
        else
        {
          if ( v16 >= (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) )
          {
            *(_QWORD *)&v15[1].Spare2[23] = v13;
            goto LABEL_14;
          }
          v13 = *(_QWORD *)v13;
        }
      }
    }
    v13 = 0LL;
    LOBYTE(v7) = v34[0];
    goto LABEL_38;
  }
  ProtoPteAddress = qword_140C4DE80;
  v20 = 1;
  LOBYTE(v7) = v34[0];
LABEL_29:
  if ( (v20 & 0xFFFFFFF8) == 0x10 )
  {
    if ( (v7 & 2) == 0 )
    {
      if ( MiAllowGuardFault(*(_QWORD *)(v5 + 16)) )
      {
        MiUpdatePageTableUseCount(v12, 1u);
        v27 = v20 & 0xF;
        if ( ProtoPteAddress )
          v27 |= 0xFFFFFFFFF8000020uLL;
        v28 = MiSwizzleInvalidPte(32 * v27);
        v29 = v33;
        v30 = v28;
        if ( MiPteInShadowRange((unsigned __int64)v33) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (v30 & 1) != 0 )
              v30 |= 0x8000000000000000uLL;
            *v29 = v30;
            MiWritePteShadow((__int64)v29, v30);
            goto LABEL_119;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v30 & 1) != 0 )
          {
            v30 |= 0x8000000000000000uLL;
          }
        }
        *v29 = v30;
LABEL_119:
        *a2 = 2;
        return 0LL;
      }
      return 3221225477LL;
    }
    return 0LL;
  }
  v22 = *(_QWORD *)(v5 + 8) >> 57;
  *(_QWORD *)&v35 = v12;
  *(_QWORD *)&v36 = v20;
  LODWORD(v37) = v22;
  *((_QWORD *)&v35 + 1) = ProtoPteAddress;
  v39 = v13;
  if ( !ProtoPteAddress )
    return MiResolvePrivateZeroFault((int *)v34);
  if ( (v7 & 2) == 0 )
  {
    if ( v13 )
    {
      if ( *(__int64 *)(v13 + 120) >= 0 )
      {
        v4 = MiCheckVadSequential((__int64)v34);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)(v13 + 36)) )
            __fastfail(0xEu);
          *(_DWORD *)(a1 + 80) |= 1u;
          *(_QWORD *)(a1 + 88) = v13;
        }
      }
    }
  }
  *a2 = 0;
  *a3 = v20;
  *a4 = ProtoPteAddress;
  MiResolveSharedZeroFault((__int64)v34);
  return v4;
}
