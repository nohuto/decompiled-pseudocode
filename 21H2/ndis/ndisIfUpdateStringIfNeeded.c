/*
 * XREFs of ndisIfUpdateStringIfNeeded @ 0x1C0126DD8
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126A9C (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C0012F18 (WPP_RECORDER_SF_Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003A1A4 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memcmp @ 0x1C003FFE0 (memcmp.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FD9BC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateStringIfNeeded(const wchar_t *a1, const void **a2, unsigned __int16 *a3, int a4, int a5)
{
  unsigned int v5; // ebx
  int *v10; // rax
  size_t v11; // r8
  unsigned __int16 v12; // ax
  _DWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+44h] [rbp-24h]

  v5 = *(unsigned __int16 *)a2;
  if ( (_WORD)v5 != *a3 || (LODWORD(v10) = memcmp(a2[1], a3 + 1, *(unsigned __int16 *)a2), (_DWORD)v10) )
  {
    if ( ndisIsValidIfStringParts(a1, v5) )
    {
      memmove(a3 + 1, a2[1], v11);
      v12 = *(_WORD *)a2;
      v14[1] = 0;
      *a3 = v12;
      v17 = a5;
      v14[0] = a4;
      v15 = a3;
      v16 = 516;
      LOBYTE(v10) = ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v14, 0);
    }
    else
    {
      v10 = &WPP_RECORDER_INITIALIZED;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        LOBYTE(v10) = WPP_RECORDER_SF_Z(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        0x16u,
                        0x10u,
                        (struct _GUID *)&WPP_6ddb316d784933c58b4801ad2d08aa04_Traceguids,
                        (unsigned __int16 *)a2);
    }
  }
  return (char)v10;
}
