/*
 * XREFs of ?CopyOutputString@@YGXPAU_CALLBACKSTATUS@@PAU_LARGE_STRING@@IH@Z @ 0xC8FDE
 * Callers:
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
 *     _xxxClientExpandStringW@4 @ 0xD97D4 (_xxxClientExpandStringW@4.c)
 *     _xxxClientLoadStringW@12 @ 0xD9AD4 (_xxxClientLoadStringW@12.c)
 *     _ClientGetListboxString@36 @ 0x189964 (_ClientGetListboxString@36.c)
 *     _SfnINCNTOUTSTRING@32 @ 0x18BE0A (_SfnINCNTOUTSTRING@32.c)
 *     _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4 (_SfnINCNTOUTSTRINGNULL@32.c)
 * Callees:
 *     _wcsncpycch@12 @ 0xC9046 (_wcsncpycch@12.c)
 *     _MBToWCSEx@24 @ 0x1B7288 (_MBToWCSEx@24.c)
 *     _WCSToMBEx@24 @ 0x1B73F3 (_WCSToMBEx@24.c)
 *     _strncpycch@12 @ 0x1B7A81 (_strncpycch@12.c)
 */

void __userpurge CopyOutputString(
        struct _CALLBACKSTATUS **a1@<edx>,
        unsigned int *a2@<ecx>,
        struct _CALLBACKSTATUS *a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        int a6)
{
  SIZE_T v8; // ecx
  struct _CALLBACKSTATUS *v9; // ecx
  unsigned int v10; // edi
  struct _CALLBACKSTATUS *v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  struct _CALLBACKSTATUS *v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax

  v8 = a2[1];
  if ( v8 )
    ProbeForRead((volatile void *)a2[2], v8, (a4 == 0) + 1);
  else
    *(_BYTE *)_MmUserProbeAddress = 0;
  if ( (int)a1[1] >= 0 )
  {
    if ( a4 )
    {
      v12 = *a2;
      if ( *a2 >= a2[1] )
        v12 = a2[1];
      v10 = (unsigned int)a3;
      v13 = MBToWCSEx(v12, a1 + 2, a3, a1 + 2);
      if ( v13 < (unsigned int)a3 )
      {
        v10 = v13;
        *((_WORD *)a1[2] + v13) = 0;
      }
    }
    else
    {
      v9 = a3;
      if ( (unsigned int)a3 >= a2[1] >> 1 )
        v9 = (struct _CALLBACKSTATUS *)(a2[1] >> 1);
      v10 = wcsncpycch(v9);
    }
    v11 = (struct _CALLBACKSTATUS *)(2 * v10);
    goto LABEL_9;
  }
  v14 = a2[1];
  if ( a4 )
  {
    v15 = a3;
    if ( (unsigned int)a3 >= v14 )
      v15 = (struct _CALLBACKSTATUS *)a2[1];
    v16 = strncpycch(v15);
    goto LABEL_23;
  }
  v17 = *a2;
  v18 = v14 >> 1;
  if ( *a2 >= v18 )
    v17 = v18;
  v11 = a3;
  v16 = WCSToMBEx(0, a2[2], v17, a1 + 2, a3, v17);
  if ( v16 < (unsigned int)a3 )
  {
    *((_BYTE *)a1[2] + v16) = 0;
LABEL_23:
    v11 = (struct _CALLBACKSTATUS *)v16;
  }
LABEL_9:
  *a1 = v11;
}
