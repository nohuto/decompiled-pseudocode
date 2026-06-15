/*
 * XREFs of sub_18001B43C @ 0x18001B43C
 * Callers:
 *     PbmRegisterAppClosureNotification @ 0x180023AC0 (PbmRegisterAppClosureNotification.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001B50C @ 0x18001B50C (sub_18001B50C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001B43C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // ebx

  v3 = qword_18004FE78;
  v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v5 = sub_18001B50C(v3, a2);
  if ( v5 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x14u, &stru_1800445C8, v5);
    }
    sub_180005724("CApplicationManager::RegisterAppClosureNotificationClient", 742, v5);
  }
  else
  {
    *(_DWORD *)(a2 + 488) = 1;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v5;
}
