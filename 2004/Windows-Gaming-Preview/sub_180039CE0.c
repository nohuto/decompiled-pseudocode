/*
 * XREFs of sub_180039CE0 @ 0x180039CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800398F4 @ 0x1800398F4 (sub_1800398F4.c)
 */

__int64 __fastcall sub_180039CE0(__int64 a1, __int64 a2)
{
  DWORD ActiveProcessorCount; // eax
  signed int LastError; // eax
  int v6; // ebx
  int v7; // edx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( v6 >= 0 )
      return (unsigned int)v6;
    v7 = 561;
LABEL_6:
    sub_180003268(retaddr, v7, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v6);
    return (unsigned int)v6;
  }
  v6 = sub_1800398F4(a1, a2, ActiveProcessorCount - 1, (__int64 *)(a1 + 136));
  if ( v6 < 0 )
  {
    v7 = 564;
    goto LABEL_6;
  }
  return 0LL;
}
