/*
 * XREFs of ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800BFD08
 * Callers:
 *     ??1SipcServer@@EEAA@XZ @ 0x1800BF3C8 (--1SipcServer@@EEAA@XZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1800C1420 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 * Callees:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF56C (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 */

SipcServer::EndpointListEntry *__fastcall NtList<SipcServer::EndpointListEntry>::Clear(
        SipcServer::EndpointListEntry **a1)
{
  SipcServer::EndpointListEntry *v2; // rcx
  SipcServer::EndpointListEntry *result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *((SipcServer::EndpointListEntry ***)*a1 + 1) != a1
      || (result = *(SipcServer::EndpointListEntry **)v2, *(SipcServer::EndpointListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *a1 = result;
    *((_QWORD *)result + 1) = a1;
    if ( v2 == (SipcServer::EndpointListEntry *)a1 )
      break;
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v2);
    a1[2] = (SipcServer::EndpointListEntry *)((char *)a1[2] - 1);
  }
  return result;
}
