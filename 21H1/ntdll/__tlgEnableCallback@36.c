/*
 * XREFs of __tlgEnableCallback@36 @ 0x4B2AE160
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __stdcall _tlgEnableCallback(
        LPCGUID a1,
        ULONG a2,
        int a3,
        ULONGLONG a4,
        ULONGLONG a5,
        PEVENT_FILTER_DESCRIPTOR a6,
        _QWORD *a7)
{
  int v7; // ecx
  int v8; // ecx
  void (__thiscall *v9)(_DWORD, LPCGUID, ULONG, int, _DWORD, int, _DWORD, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD); // esi

  if ( a7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( (_BYTE)a3 )
          v7 = (unsigned __int8)a3 + 1;
        else
          v7 = 256;
        *(_DWORD *)a7 = v7;
        a7[1] = a4;
        v8 = HIDWORD(a4);
        a7[2] = a5;
        goto LABEL_7;
      }
    }
    else
    {
      *(_DWORD *)a7 = 0;
    }
    v8 = HIDWORD(a4);
LABEL_7:
    v9 = (void (__thiscall *)(_DWORD, LPCGUID, ULONG, int, _DWORD, int, _DWORD, _DWORD, PEVENT_FILTER_DESCRIPTOR, _DWORD))*((_DWORD *)a7 + 8);
    if ( v9 )
      v9(v9, a1, a2, a3, a4, v8, a5, HIDWORD(a5), a6, *((_DWORD *)a7 + 9));
  }
}
