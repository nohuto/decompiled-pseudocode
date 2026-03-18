/*
 * XREFs of DeleteProperties @ 0x1C0029300
 * Callers:
 *     <none>
 * Callees:
 *     UserGlobalAtomTableCallout @ 0x1C002941C (UserGlobalAtomTableCallout.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C0029534 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0029580 (UserDeleteAtomFromAtomTable.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DeleteProperties(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 result; // rax
  __int16 v6; // cx
  __int64 v7; // rcx
  __int64 v8; // rbp
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (_QWORD *)(v2 + 8);
  if ( v3 )
  {
    do
    {
      v6 = *((_WORD *)v4 + 5);
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x8001) == 0x8001 )
        {
          (**(void (__fastcall ***)(_QWORD))*v4)(*v4);
        }
        else if ( (v6 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, (PVOID)*v4);
        }
        else if ( (v6 & 4) == 0 )
        {
          Win32FreePool(*v4);
        }
      }
      CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(v9);
      v8 = UserGlobalAtomTableCallout();
      if ( (*((_BYTE *)v4 + 10) & 2) != 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 820) & 0x4000000) == 0
        && v8 )
      {
        UserDeleteAtomFromAtomTable(v8, *((unsigned __int16 *)v4 + 4));
      }
      v4 += 2;
      --v3;
    }
    while ( v3 );
    v2 = *(_QWORD *)(a1 + 144);
  }
  result = Win32FreePool(v2);
  *(_QWORD *)(a1 + 144) = 0LL;
  return result;
}
