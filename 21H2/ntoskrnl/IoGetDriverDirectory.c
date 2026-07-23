/*
 * XREFs of IoGetDriverDirectory @ 0x14089ED70
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PiGetDriverImageDirectory @ 0x14089F4E4 (PiGetDriverImageDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x14089F628 (PiGetDriverMutableStateDirectory.c)
 */

__int64 __fastcall IoGetDriverDirectory(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  void *v5; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  int DriverMutableStateDirectory; // eax
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v11 = 0LL;
  if ( a1 && (v7 = *(_QWORD *)(a1 + 48)) != 0 && *(_QWORD *)(v7 + 32) && *(_WORD *)(v7 + 24) && !a3 && a4 )
  {
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 != 1 )
        return (unsigned int)-1073741811;
      DriverMutableStateDirectory = PiGetDriverMutableStateDirectory(a1, a2, &v11);
    }
    else
    {
      DriverMutableStateDirectory = PiGetDriverImageDirectory(a1, &v11);
    }
    v8 = DriverMutableStateDirectory;
    if ( DriverMutableStateDirectory >= 0 )
    {
      *a4 = v11;
      return v8;
    }
    v5 = v11;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v5 )
    ZwClose(v5);
  return v8;
}
