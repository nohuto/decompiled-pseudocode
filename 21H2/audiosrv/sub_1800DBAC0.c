/*
 * XREFs of sub_1800DBAC0 @ 0x1800DBAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

__int64 __fastcall sub_1800DBAC0(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a2;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x27u, (__int64)&unk_18015E3E8, a1, a2);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v7 = *(_QWORD *)(a1 + 192);
  if ( v7 && *(_DWORD *)(a1 + 184) )
  {
    if ( (unsigned int)v4 < *(_DWORD *)(v7 + 92) )
    {
      v8 = 0;
      *a3 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 4 * v4);
      goto LABEL_12;
    }
    v8 = -2147024809;
    sub_18004BD84((int)retaddr, 859, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147024809);
  }
  else
  {
    v8 = -2004287487;
  }
  sub_18005E8F8((__int64)"CVADServer::GetChannelVolume", 2462, v8);
LABEL_12:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v8;
}
