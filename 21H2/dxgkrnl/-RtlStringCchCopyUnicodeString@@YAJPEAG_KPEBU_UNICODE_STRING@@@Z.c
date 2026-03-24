/*
 * XREFs of ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0019228
 * Callers:
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C014660C (MonitorGetMonitorDeviceInterfaceName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyUnicodeString(char *a1, __int64 a2, const struct _UNICODE_STRING *a3)
{
  signed int v3; // r9d
  unsigned __int64 Length; // rax
  wchar_t *v6; // r11
  unsigned __int64 v7; // r8
  unsigned __int16 MaximumLength; // r10
  wchar_t *Buffer; // rbx
  __int64 v10; // r8
  signed __int64 v11; // r11
  unsigned __int16 *v12; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    Length = a3->Length;
    v6 = 0LL;
    v7 = 0LL;
    v3 = 0;
    if ( (Length & 1) != 0
      || (MaximumLength = a3->MaximumLength, (MaximumLength & 1) != 0)
      || (unsigned __int16)Length > MaximumLength
      || MaximumLength == 0xFFFF )
    {
      v3 = -1073741811;
    }
    else
    {
      Buffer = a3->Buffer;
      if ( !Buffer && ((_WORD)Length || MaximumLength) )
      {
        v3 = -1073741811;
      }
      else
      {
        v6 = Buffer;
        v7 = Length >> 1;
      }
      if ( v3 >= 0 )
      {
        if ( a2 )
        {
          v10 = v7 - a2;
          v11 = (char *)v6 - a1;
          do
          {
            if ( !(v10 + a2) )
              break;
            *(_WORD *)a1 = *(_WORD *)&a1[v11];
            a1 += 2;
            --a2;
          }
          while ( a2 );
        }
        v12 = (unsigned __int16 *)(a1 - 2);
        if ( a2 )
          v12 = (unsigned __int16 *)a1;
        v3 = a2 == 0 ? 0x80000005 : 0;
        *v12 = 0;
        return (unsigned int)v3;
      }
    }
    *(_WORD *)a1 = 0;
  }
  return (unsigned int)v3;
}
