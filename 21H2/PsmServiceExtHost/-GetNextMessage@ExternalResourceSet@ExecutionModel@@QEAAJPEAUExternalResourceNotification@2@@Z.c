/*
 * XREFs of ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x1800740D8
 * Callers:
 *     ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x180068278 (-RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResou.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180045B58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::GetNextMessage(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::ExternalResourceNotification *a2)
{
  char *v2; // rax
  char *v4; // rcx
  unsigned int v5; // edi
  __int64 v7; // rdx
  _QWORD *v8; // r8
  int v9; // ebx

  v2 = (char *)this + 1312;
  v4 = (char *)*((_QWORD *)this + 164);
  v5 = 0;
  if ( v4 == v2 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    v7 = *(_QWORD *)v4;
    v8 = (_QWORD *)*((_QWORD *)v4 + 1);
    v9 = *((_DWORD *)v4 + 4);
    *v8 = *(_QWORD *)v4;
    *(_QWORD *)(v7 + 8) = v8;
    operator delete(v4);
    --*((_QWORD *)this + 166);
    *(_OWORD *)a2 = 0LL;
    *(_DWORD *)a2 = v9;
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 162);
  }
  return v5;
}
