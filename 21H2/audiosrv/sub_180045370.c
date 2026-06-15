/*
 * XREFs of sub_180045370 @ 0x180045370
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180045370(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 37LL, &unk_18015E3E8, a1);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v5 = *(_QWORD *)(a1 + 192);
  if ( v5 && *(_DWORD *)(a1 + 184) )
  {
    v6 = 0;
    *a2 = *(_DWORD *)(v5 + 92);
  }
  else
  {
    v6 = -2004287487;
    sub_18005E8F8("CVADServer::GetChannelCount", 2386LL, 2290679809LL);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
