/*
 * XREFs of ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C009464C
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C00946D4 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnProcessCreation(struct DirectComposition::CProcessData *a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rdx
  NTSTATUS v5; // edi
  __int64 v6; // r8
  __int64 result; // rax

  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 0x73634344u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( v3 )
  {
    v5 = ExInitializeResourceLite(v3);
    if ( v5 < 0 )
    {
      Win32FreePool((__int64)v3, v4, v6);
      v3 = 0LL;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)v5;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 4) = v3;
  return result;
}
