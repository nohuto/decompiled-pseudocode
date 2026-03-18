/*
 * XREFs of _EngHangNotification@8 @ 0x1D171B
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

ULONG __stdcall EngHangNotification(HDEV hDev, PVOID Reserved)
{
  ULONG v2; // esi
  int v3; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // kr00_4
  void *DriverObject; // eax
  char *ErrorLogEntry; // eax
  int (__stdcall *v10)(_DWORD, _DWORD); // ecx
  int v11; // eax
  const unsigned __int16 *Src; // [esp+Ch] [ebp-Ch]
  char *ElEntry; // [esp+10h] [ebp-8h]
  HDEV hDeva; // [esp+20h] [ebp+8h]

  v2 = 1;
  v3 = WdLogNewEntry5_WdEvent();
  *(_DWORD *)(v3 + 12) = hDev;
  WdLogEvent5_WdEvent(v3);
  if ( hDev )
  {
    v5 = *((_DWORD *)hDev + 458);
    if ( v5 == -4 || !v5 )
    {
      v11 = WdLogNewEntry5_WdTrace();
      goto LABEL_10;
    }
    _DbgPrint("GDI: EngHangNotification: %ls is not responding.\n", (const wchar_t *)(v5 + 64));
    v6 = WdLogNewEntry5_WdTrace();
    *(_DWORD *)(v6 + 12) = v5;
    WdLogEvent5_WdTrace(v6);
    v7 = wcslen((const unsigned __int16 *)v5);
    Src = *(const unsigned __int16 **)(v5 + 180);
    hDeva = (HDEV)(2 * wcslen(Src) + 2);
    DriverObject = (void *)UserGetDriverObject();
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DriverObject, (_BYTE)hDeva + 2 * v7 + 42);
    ElEntry = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_WORD *)ErrorLogEntry + 2) = 2;
      *((_DWORD *)ErrorLogEntry + 3) = -1073741436;
      *((_WORD *)ErrorLogEntry + 3) = 40;
      memcpy(ErrorLogEntry + 40, (const void *)v5, 2 * v7 + 2);
      memcpy(&ElEntry[2 * v7 + 42], Src, (size_t)hDeva);
      IoWriteErrorLogEntry(ElEntry);
    }
    v10 = (int (__stdcall *)(_DWORD, _DWORD))*((_DWORD *)hDev + 564);
    if ( v10 && !v10(*((_DWORD *)hDev + 277), 0) )
      v2 = 0;
  }
  v11 = WdLogNewEntry5_WdTrace();
  *(_DWORD *)(v11 + 12) = v2;
LABEL_10:
  WdLogEvent5_WdTrace(v11);
  return v2;
}
