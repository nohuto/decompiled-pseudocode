/*
 * XREFs of sub_180024850 @ 0x180024850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180015790 @ 0x180015790 (sub_180015790.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180024850(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebp
  int v3; // r14d
  __int64 v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = qword_18004FE78;
  v5 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v6 = sub_18001B50C(v4, v1);
  if ( v6 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x15u, &stru_1800445C8, v6);
    }
    sub_180005724("CApplicationManager::SetSmtcSubscriptionState", 800, v6);
  }
  else
  {
    sub_180015790(v1 + 16, v3, v2);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
}
