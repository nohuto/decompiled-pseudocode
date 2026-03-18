/*
 * XREFs of _InitTimerCoalescing@0 @ 0xEBBA8
 * Callers:
 *     <none>
 * Callees:
 *     _SetTimerCoalescingTolerance@4 @ 0xAF316 (_SetTimerCoalescingTolerance@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall InitTimerCoalescing()
{
  int result; // eax
  int v1; // eax
  int v2; // ecx
  char *i; // eax
  int v4; // ecx
  char *j; // eax
  int v6; // ecx
  _DWORD *k; // eax
  int v8; // ecx
  _DWORD *m; // eax
  void *KeyHandle; // [esp+10h] [ebp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+14h] [ebp-8Ch] BYREF
  ULONG ResultLength; // [esp+1Ch] [ebp-84h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+38h] [ebp-68h] BYREF
  int v15; // [esp+3Ch] [ebp-64h]
  int v16; // [esp+40h] [ebp-60h]
  int v17; // [esp+44h] [ebp-5Ch]
  _DWORD v18[3]; // [esp+48h] [ebp-58h]
  _DWORD v19[4]; // [esp+54h] [ebp-4Ch] BYREF
  char v20; // [esp+64h] [ebp-3Ch] BYREF
  _DWORD v21[4]; // [esp+74h] [ebp-2Ch] BYREF
  char v22; // [esp+84h] [ebp-1Ch] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  ResultLength = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\software\\microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"TimerCoalescing");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x60u,
           &ResultLength) >= 0
      && v15 == 3
      && v16 == 80
      && !v17 )
    {
      v1 = 0;
      while ( !v18[v1] )
      {
        if ( (unsigned int)++v1 >= 3 )
        {
          v2 = 0;
          for ( i = &v20; !*(_DWORD *)i; i += 4 )
          {
            if ( (unsigned int)++v2 >= 4 )
            {
              v4 = 0;
              for ( j = &v22; !*(_DWORD *)j; j += 4 )
              {
                if ( (unsigned int)++v4 >= 4 )
                {
                  v6 = 0;
                  for ( k = v19; *k <= 0x7FFFFFF5u; ++k )
                  {
                    if ( (unsigned int)++v6 >= 4 )
                    {
                      v8 = 0;
                      for ( m = v21; *m <= 0x7FFFFFF5u; ++m )
                      {
                        if ( (unsigned int)++v8 >= 4 )
                        {
                          dword_26BDE4[0] = v19[0];
                          dword_26BDE4[1] = v19[1];
                          dword_26BDE4[2] = v19[2];
                          dword_26BDE4[3] = v19[3];
                          gTimerCoalescingSpec = (struct _TIMER_COALESCING_SPEC *)v21[0];
                          *(&gTimerCoalescingSpec + 1) = (struct _TIMER_COALESCING_SPEC *)v21[1];
                          *(&gTimerCoalescingSpec + 2) = (struct _TIMER_COALESCING_SPEC *)v21[2];
                          *(&gTimerCoalescingSpec + 3) = (struct _TIMER_COALESCING_SPEC *)v21[3];
                          SetTimerCoalescingTolerance(0);
                          return ZwClose(KeyHandle);
                        }
                      }
                      return ZwClose(KeyHandle);
                    }
                  }
                  return ZwClose(KeyHandle);
                }
              }
              return ZwClose(KeyHandle);
            }
          }
          return ZwClose(KeyHandle);
        }
      }
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
