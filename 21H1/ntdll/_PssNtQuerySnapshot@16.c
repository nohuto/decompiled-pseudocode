/*
 * XREFs of _PssNtQuerySnapshot@16 @ 0x4B386C80
 * Callers:
 *     <none>
 * Callees:
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 *     _PsspQueryInfoClass_10@8 @ 0x4B388A62 (_PsspQueryInfoClass_10@8.c)
 *     _PsspQueryInfoClass_9@8 @ 0x4B388A82 (_PsspQueryInfoClass_9@8.c)
 *     _PsspQueryInfoClass_PSS_QUERY_HANDLE_TRACE_INFORMATION@8 @ 0x4B388AA2 (_PsspQueryInfoClass_PSS_QUERY_HANDLE_TRACE_INFORMATION@8.c)
 *     _PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION@8 @ 0x4B388AC0 (_PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION@8.c)
 *     _PsspQueryInfoClass_PSS_QUERY_THREAD_INFORMATION@8 @ 0x4B388B27 (_PsspQueryInfoClass_PSS_QUERY_THREAD_INFORMATION@8.c)
 */

int __stdcall PssNtQuerySnapshot(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  const void *v8; // esi
  int v9; // [esp-4h] [ebp-Ch]
  void *retaddr; // [esp+Ch] [ebp+4h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( result >= 0 )
  {
    switch ( a2 )
    {
      case 0:
        if ( a4 != 152 )
          goto LABEL_34;
        return PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(a1, a3);
      case 1:
        if ( a4 != 4 )
          goto LABEL_34;
        v5 = a1[188];
        if ( v5 )
        {
          *a3 = v5;
          goto LABEL_9;
        }
        return -1073741275;
      case 2:
        if ( a4 != 4 )
          goto LABEL_34;
        v6 = 0;
        if ( !a1[193] )
          return -1073741275;
        v7 = a1[192];
        goto LABEL_14;
      case 3:
        if ( a4 != 4 )
          goto LABEL_34;
        v6 = 0;
        if ( !a1[197] )
          return -1073741275;
        v7 = a1[195];
LABEL_14:
        *a3 = v7;
        return v6;
      case 4:
        if ( a4 != 4 )
          goto LABEL_34;
        v6 = 0;
        if ( !a1[206] )
          return -1073741275;
        *a3 = a1[204];
        return v6;
      case 5:
        if ( a4 != 8 )
          goto LABEL_34;
        return PsspQueryInfoClass_PSS_QUERY_THREAD_INFORMATION(a1, a3);
      case 6:
        if ( a4 != 8 )
          goto LABEL_34;
        return PsspQueryInfoClass_PSS_QUERY_HANDLE_TRACE_INFORMATION(a1, a3);
      case 7:
        if ( a4 != 96 )
          goto LABEL_34;
        v8 = a1 + 218;
        v9 = 24;
        goto LABEL_28;
      case 8:
        if ( a4 != 64 )
          goto LABEL_34;
        v8 = a1 + 22;
        v9 = 16;
LABEL_28:
        qmemcpy(a3, v8, 4 * v9);
LABEL_9:
        result = 0;
        break;
      case 9:
        if ( a4 != 40 )
          goto LABEL_34;
        result = PsspQueryInfoClass_9(a1, a3);
        break;
      case 10:
        if ( a4 == 8 )
          result = PsspQueryInfoClass_10(a1, a3);
        else
LABEL_34:
          result = -1073741820;
        break;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
