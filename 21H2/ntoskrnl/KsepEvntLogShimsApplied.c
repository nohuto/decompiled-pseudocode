/*
 * XREFs of KsepEvntLogShimsApplied @ 0x14052716C
 * Callers:
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KsepPoolAllocatePaged @ 0x14037129C (KsepPoolAllocatePaged.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x14066DF18 (RtlStringFromGUIDEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rbx
  unsigned __int16 v7; // r14
  UNICODE_STRING *Paged; // rax
  UNICODE_STRING *v9; // rsi
  wchar_t *p_Length; // rdi
  UNICODE_STRING *v11; // rbx
  unsigned __int16 *v12; // r15
  wchar_t *Buffer; // rcx
  int v14; // ebx
  unsigned int v15; // ecx
  ULONG v16; // eax
  unsigned int v17; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v19; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-19h]
  __int64 v22; // [rsp+78h] [rbp-11h]
  unsigned int *v23; // [rsp+80h] [rbp-9h]
  __int64 v24; // [rsp+88h] [rbp-1h]
  wchar_t *v25; // [rsp+90h] [rbp+7h]
  int v26; // [rsp+98h] [rbp+Fh]
  int v27; // [rsp+9Ch] [rbp+13h]

  v3 = 0;
  v19 = a1;
  v5 = a3;
  v17 = a3;
  v7 = 0;
  Destination = 0LL;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseShimsApplied) && (_DWORD)v5 && a2 && a1 )
  {
    Paged = (UNICODE_STRING *)KsepPoolAllocatePaged(94 * v5);
    v9 = Paged;
    if ( Paged )
    {
      p_Length = &Paged[v17].Length;
      if ( v17 )
      {
        do
        {
          v11 = &v9[v3];
          *v11 = 0LL;
          v11->Buffer = p_Length;
          p_Length += 39;
          v11->MaximumLength = 78;
          RtlStringFromGUIDEx((PGUID)(a2 + 80LL * v3++), v11, 0);
          v7 += v11->Length + 4;
        }
        while ( v3 < v17 );
        v12 = v19;
        if ( v7 )
        {
          Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged(v7);
          Buffer = Destination.Buffer;
          if ( Destination.Buffer )
          {
            v14 = 0;
            Destination.MaximumLength = v7;
            if ( v17 )
            {
              while ( RtlAppendUnicodeStringToString(&Destination, &v9[v14]) >= 0 )
              {
                v15 = v17;
                if ( v14 != v17 - 1 )
                {
                  if ( RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
                    break;
                  v15 = v17;
                }
                if ( ++v14 >= v15 )
                {
                  Buffer = Destination.Buffer;
                  goto LABEL_18;
                }
              }
            }
            else
            {
LABEL_18:
              UserData.Ptr = *((_QWORD *)v12 + 1);
              v16 = *v12 + 2;
              v22 = 4LL;
              UserData.Size = v16;
              v21 = a2 + 68;
              v23 = &v17;
              v24 = 4LL;
              v26 = Destination.Length + 2;
              v25 = Buffer;
              UserData.Reserved = 0;
              v27 = 0;
              EtwWriteEx(KseEtwHandle, &KseShimsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
            }
          }
        }
      }
      ExFreePoolWithTag(v9, 0x6145534Bu);
      _InterlockedIncrement(&dword_140C2AA64);
    }
    if ( Destination.Buffer )
    {
      ExFreePoolWithTag(Destination.Buffer, 0x6145534Bu);
      _InterlockedIncrement(&dword_140C2AA64);
    }
  }
}
