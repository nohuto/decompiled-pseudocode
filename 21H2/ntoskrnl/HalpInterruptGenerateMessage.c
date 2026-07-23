/*
 * XREFs of HalpInterruptGenerateMessage @ 0x140377F98
 * Callers:
 *     HalpPopulateMsiMessages @ 0x140377EF4 (HalpPopulateMsiMessages.c)
 *     HalpIommuConfigureInterrupt @ 0x1404CBEC0 (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x1403770A0 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpInterruptGenerateMessage(int *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  ULONG_PTR v4; // rbx
  int v6; // ecx
  char v7; // r15
  __int64 v11; // rcx
  NTSTATUS ProcessorIdByNtNumber; // eax
  int v13; // eax
  __int64 result; // rax
  int v15; // ecx
  ULONG v16; // ecx
  _DWORD *v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  v4 = HalpInterruptController;
  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *a1;
  v7 = 0;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v11 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v11 )
  {
    v15 = v11 - 2;
    if ( !v15 )
    {
      DWORD2(v19) = 1;
      goto LABEL_4;
    }
    if ( v15 != 3 )
      return 3221225659LL;
    v16 = a1[2];
    v7 = 1;
    DWORD2(v19) = 4;
    ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v16, &v20);
  }
  else
  {
    ProcessorIdByNtNumber = HalpInterruptDestinationToTarget(v11, a1, (char *)&v19 + 8);
  }
  if ( ProcessorIdByNtNumber < 0 )
  {
    HalpInterruptLastProblem = 21;
    return 3221225485LL;
  }
LABEL_4:
  v13 = 16;
  LODWORD(v18) = 2;
  DWORD2(v18) = 1;
  DWORD1(v19) = 1;
  if ( !v7 )
    v13 = 18;
  LODWORD(v19) = -1;
  HIDWORD(v18) = v13;
  LODWORD(v21) = *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(v4 + 220) & 0x100) != 0 )
  {
    v17 = (_DWORD *)*((_QWORD *)a1 + 2);
    if ( (*v17 & 0x3FFFFFFF) != 0x3FFFFFFE )
    {
      DWORD2(v19) = 7;
      LODWORD(v20) = *v17 & 0x3FFFFFFF;
    }
  }
  result = 3221225659LL;
  if ( *(_QWORD *)(v4 + 136)
    && (result = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD *, _QWORD *))(v4 + 136))(
                   *(_QWORD *)(v4 + 16),
                   &v18,
                   a3,
                   a4),
        (int)result >= 0) )
  {
    if ( (((-(__int64)(HalpApicGuestX2Mode != 0) & 0xFF00000100000000uLL) - 0x100000000LL) & *a3) != 0 )
      return 3221226528LL;
    else
      return (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 0xC0000420 : 0;
  }
  else
  {
    *(_DWORD *)(v4 + 296) = result;
    HalpInterruptLastProblem = 8;
    *(_DWORD *)(v4 + 292) = 8;
    *(_QWORD *)(v4 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    *(_DWORD *)(v4 + 312) = 2041;
  }
  return result;
}
