/*
 * XREFs of NtUserSBGetParms @ 0x1C00F5440
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, int a2, _QWORD *a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  int v12; // ebx
  __int128 v13; // xmm1
  int v14; // eax
  __int128 v16; // [rsp+20h] [rbp-68h]
  __int64 v17; // [rsp+30h] [rbp-58h]

  EnterSharedCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  v12 = 0;
  if ( v11 )
  {
    if ( a4 >= MmUserProbeAddress )
      *(_DWORD *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = *(_OWORD *)a4;
    *(_QWORD *)(a4 + 16) = *(_QWORD *)(a4 + 16);
    *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 24);
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *(_OWORD *)a4;
    v16 = *(_OWORD *)a4;
    v17 = *(_QWORD *)(a4 + 16);
    v9 = *(unsigned int *)(a4 + 24);
    v10 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 712LL);
    v8 = HIDWORD(*(_QWORD *)a4);
    if ( (*(_QWORD *)a4 & 0x100000000LL) != 0 )
    {
      *((_QWORD *)&v16 + 1) = *a3;
      v13 = v16;
    }
    v14 = *(_QWORD *)(a4 + 16);
    if ( (v8 & 2) != 0 )
      v14 = a3[1];
    LODWORD(v17) = v14;
    if ( (v8 & 4) != 0 )
      HIDWORD(v17) = HIDWORD(*(_OWORD *)a3);
    if ( (v8 & 0x10) != 0 )
    {
      if ( v10 && *(_DWORD *)(v10 + 88) == a2 && *(_QWORD *)(v10 + 8) == v11 )
        v9 = *(unsigned int *)(v10 + 84);
      else
        v9 = HIDWORD(a3[1]);
    }
    LOBYTE(v12) = (v8 & 0x17) != 0;
    *(_OWORD *)a4 = v13;
    *(_QWORD *)(a4 + 16) = v17;
    *(_DWORD *)(a4 + 24) = v9;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v12;
}
