/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0048384
 * Callers:
 *     xxxClientLoadStringW @ 0x1C00480B4 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C0048558 (xxxClientExpandStringW.c)
 *     ClientGetListboxString @ 0x1C014C7B4 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C022AB60 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022B180 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     wcsncpycch @ 0x1C0048434 (wcsncpycch.c)
 *     MBToWCSEx @ 0x1C00E9980 (MBToWCSEx.c)
 *     WCSToMBEx @ 0x1C00E99E8 (WCSToMBEx.c)
 *     strncpycch @ 0x1C025F2E8 (strncpycch.c)
 */

void __fastcall CopyOutputString(volatile void **a1, struct _LARGE_STRING *a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // r8
  volatile void *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // r8

  v6 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], (unsigned int)v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v11 = *(unsigned int *)a1;
      v12 = *((_DWORD *)a1 + 2);
      if ( (unsigned int)v11 >= v12 )
        v11 = v12;
      v10 = MBToWCSEx(v6, a1[2], v11, (char *)a2 + 8, a3);
      if ( v10 >= a3 )
        goto LABEL_9;
      *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v10) = 0;
    }
    else
    {
      if ( a3 < *((_DWORD *)a1 + 2) >> 1 )
        LODWORD(v9) = a3;
      else
        v9 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
      v10 = wcsncpycch(*((_QWORD *)a2 + 1), a1[2], (unsigned int)v9);
    }
    a3 = v10;
LABEL_9:
    a3 *= 2;
    goto LABEL_10;
  }
  v13 = *((unsigned int *)a1 + 2);
  v14 = a1[2];
  if ( a4 )
  {
    if ( a3 < (unsigned int)v13 )
      v13 = a3;
    v15 = strncpycch(*((_QWORD *)a2 + 1), v14, v13);
    goto LABEL_25;
  }
  v16 = (unsigned int)v13 >> 1;
  if ( *(_DWORD *)a1 < (unsigned int)v16 )
    v16 = *(unsigned int *)a1;
  v15 = WCSToMBEx(0LL, v14, v16, (char *)a2 + 8, a3);
  if ( v15 < a3 )
  {
    *(_BYTE *)(v15 + *((_QWORD *)a2 + 1)) = 0;
LABEL_25:
    a3 = v15;
  }
LABEL_10:
  *(_DWORD *)a2 = a3;
}
